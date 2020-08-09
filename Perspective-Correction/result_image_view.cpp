#include "result_image_view.h"

ResultImageView::ResultImageView(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

ResultImageView::~ResultImageView() {}

void ResultImageView::loadImage(const cv::Mat& srcIm)
{
	cv::Mat displayIm;
	cv::cvtColor(srcIm, displayIm, cv::COLOR_BGR2RGB);
	
	
	ui.labelImageView->setFixedWidth(srcIm.cols);
	ui.labelImageView->setFixedHeight(srcIm.rows);

	ui.labelImageView->setPixmap(
		QPixmap::fromImage(
			QImage(
				displayIm.data, displayIm.cols, displayIm.rows, displayIm.step, QImage::Format_RGB888
			)
		)
	);
}
