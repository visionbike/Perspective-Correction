#pragma once
#ifndef _CLICKABLE_LABEL_H_
#define _CLICKABLE_LABEL_H_

#include <QWidget>
#include <QLabel>
#include <QMouseEvent>

class ClickableLabel : public QLabel
{
	Q_OBJECT

public:
	explicit ClickableLabel(QWidget *parent = Q_NULLPTR);
	~ClickableLabel();
	QPoint getClickedPosition();

signals:
	void clicked(const QPoint&);

private:
	QPoint m_pos;
	bool m_paintFlag;

protected:
	void mousePressEvent(QMouseEvent* e);
};

#endif // !_CLICKABLE_LABEL_H_

