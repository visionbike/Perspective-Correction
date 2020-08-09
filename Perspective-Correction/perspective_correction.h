#pragma once

#include <QtWidgets/QMainWindow>
#include <QFileDialog>
#include <QMessageBox>
#include <QImage>
#include <QPainter>

#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/calib3d/calib3d.hpp>

#include "ui_perspective_correction.h"
#include "result_image_view.h"

class PerspectiveCorrection : public QMainWindow
{
    Q_OBJECT

public:
    PerspectiveCorrection(QWidget *parent = Q_NULLPTR);
	~PerspectiveCorrection();

private:
    Ui::PerspectiveCorrectionClass ui;

	QString m_inputPath;
	float	m_ratio;
	cv::Mat m_im;
	cv::Mat m_displayIm;
	std::vector<cv::Point2f> m_ptsSrc;
	ResultImageView* m_imageView;

private slots:
	void on_browse_toolButton_clicked();
	void on_load_pushButton_clicked();
	void on_reset_pushButton_clicked();
	void on_run_pushButton_clicked();
	void on_imageView_label_clicked();
};
