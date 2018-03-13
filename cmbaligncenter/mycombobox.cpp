#include "mycombobox.h"
#include <qstylepainter.h>
#include <QStyleOptionComboBox>

myComboBox::myComboBox(QWidget *parent)
    :QComboBox(parent)
{

}

void myComboBox::paintEvent(QPaintEvent *e)
{
    QStylePainter painter(this);
    painter.setPen(palette().color(QPalette::Text));

    // draw the combobox frame, focusrect and selected etc.
    QStyleOptionComboBox opt;
    initStyleOption(&opt);
    painter.drawComplexControl(QStyle::CC_ComboBox, opt);

    // draw the icon and text
    QRect labelRect = opt.rect;
    painter.drawText(labelRect, opt.currentText, QTextOption(Qt::AlignCenter));
    //painter.drawControl(QStyle::CE_ComboBoxLabel, opt);
}

