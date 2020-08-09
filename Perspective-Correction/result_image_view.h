#pragma once

#include <QWidget>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include "ui_result_image_view.h"

class ResultImageView : public QWidget
{
	Q_OBJECT

public:
	ResultImageView(QWidget *parent = Q_NULLPTR);
	~ResultImageView();

	void loadImage(const cv::Mat& srcIm);

private:
	Ui::ResultImageView ui;

};
