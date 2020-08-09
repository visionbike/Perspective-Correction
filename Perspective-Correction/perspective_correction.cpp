#include "perspective_correction.h"

PerspectiveCorrection::PerspectiveCorrection(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);

	m_inputPath = "";

	ui.lineEditInput->setReadOnly(true);
	ui.toolButtonInput->setEnabled(true);

	m_imageView = nullptr;

	connect(ui.toolButtonInput, SIGNAL(clicked()), SLOT(on_browse_toolButton_clicked()));
	connect(ui.pushButtonLoad, SIGNAL(clicked()), SLOT(on_load_pushButton_clicked()));
	connect(ui.pushButtonReset, SIGNAL(clicked()), SLOT(on_reset_pushButton_clicked()));
	connect(ui.pushButtonRun, SIGNAL(clicked()), SLOT(on_run_pushButton_clicked()));
	connect(ui.labelImageView, SIGNAL(clicked(const QPoint&)), SLOT(on_imageView_label_clicked()));
}

PerspectiveCorrection::~PerspectiveCorrection()
{
	m_im.release();
	m_displayIm.release();
	m_inputPath = "";
	m_ptsSrc.clear();
}

void PerspectiveCorrection::on_browse_toolButton_clicked()
{
	m_inputPath = QFileDialog::getOpenFileName(
		this, 
		"File name", 
		"./", 
		"Image Files(*.png *.jpg *.bmp)"
	);

	ui.lineEditInput->setText(m_inputPath);
}

void PerspectiveCorrection::on_load_pushButton_clicked()
{
	if (m_inputPath == "") { return; }
	m_im = cv::imread(m_inputPath.toStdString(), cv::IMREAD_UNCHANGED);
	if (m_im.empty()) {
		QMessageBox msgBox;
		msgBox.setText("Cannot load the image!");
		msgBox.exec();
		return;
	}
	
	cv::cvtColor(m_im, m_displayIm, cv::COLOR_BGR2RGB);
	
	int dispWidth = ui.labelImageView->width();
	int dispHeight = ui.labelImageView->height();
	
	if (m_displayIm.cols <= dispWidth) { dispWidth = m_displayIm.cols; }
	if (m_displayIm.rows <= dispHeight) { dispHeight = m_displayIm.rows; }
	
	cv::resize(m_displayIm, m_displayIm, cv::Size(dispWidth, dispHeight));
	
	ui.labelImageView->setPixmap(
		QPixmap::fromImage(
			QImage(
				m_displayIm.data, m_displayIm.cols, m_displayIm.rows, m_displayIm.step, QImage::Format_RGB888
			)
		)
	);
}

void PerspectiveCorrection::on_reset_pushButton_clicked() {
	m_ptsSrc.clear();
	ui.labelImageView->setPixmap(
		QPixmap::fromImage(
			QImage(
				m_displayIm.data, m_displayIm.cols, m_displayIm.rows, m_displayIm.step, QImage::Format_RGB888
			)
		)
	);
	ui.lineEditOutW->setText(QString(""));
	ui.lineEditOutH->setText(QString(""));
}

void PerspectiveCorrection::on_run_pushButton_clicked()
{
	if (m_ptsSrc.size() != 4) {
		QMessageBox msgBox;
		msgBox.setText("Please pick the point first!");
		msgBox.exec();
		return;
	}

	if (ui.lineEditOutW->text().isEmpty() || ui.lineEditOutH->text().isEmpty()) {
		QMessageBox msgBox;
		msgBox.setText("Please set output size!");
		msgBox.exec();
		return;
	}
	
	int outW = ui.lineEditOutW->text().toInt();
	int outH = ui.lineEditOutH->text().toInt();
	std::vector<cv::Point2f> ptsDst = { cv::Point2f(0, 0), cv::Point2f(outW - 1, 0), cv::Point2f(outW - 1, outH - 1), cv::Point2f(0, outH - 1) };

	cv::Mat HMat = cv::findHomography(m_ptsSrc, ptsDst);
	cv::Mat imOut;
	warpPerspective(m_im, imOut, HMat, cv::Size(outW, outH));
	cv::imwrite("result.png", imOut);

	m_imageView = new ResultImageView(this);
	m_imageView->setWindowFlags(Qt::Window);
	m_imageView->setAttribute(Qt::WA_DeleteOnClose, true);
	m_imageView->loadImage(imOut);
	m_imageView->show();
	
}

void PerspectiveCorrection::on_imageView_label_clicked()
{
	if (m_ptsSrc.size() <= 4) {
		QPoint pos = ui.labelImageView->getClickedPosition();
		QImage im(ui.labelImageView->pixmap()->toImage());
		QPainter painter(&im);
		QPen pen(Qt::red);
		pen.setWidth(10);
		pen.setCapStyle(Qt::RoundCap);
		painter.setPen(pen);
		painter.drawPoint(pos);
		ui.labelImageView->setPixmap(QPixmap::fromImage(im));
		m_ptsSrc.push_back(cv::Point2f(1. * pos.x() / im.width() * m_im.cols, 1. * pos.y() / im.height() * m_im.rows));
		ui.labelGuide->setText(QString::number(1.0 * pos.x() / im.width() * m_im.cols) + QString(",") + QString::number(1.0 * pos.y() / im.height() * m_im.rows));
	}
}