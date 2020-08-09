#include "clickable_label.h"

ClickableLabel::ClickableLabel(QWidget *parent)
	: QLabel(parent) {
	m_pos = QPoint(0, 0);
	m_paintFlag = false;
}

ClickableLabel::~ClickableLabel() {}

QPoint ClickableLabel::getClickedPosition()
{
	return m_pos;
}

void ClickableLabel::mousePressEvent(QMouseEvent* e) 
{
	QPoint pos = e->pos();
	m_pos = pos;
	emit clicked(m_pos);
	update();
}
