#ifndef MYCOMBOBOX_H
#define MYCOMBOBOX_H

#include <QComboBox>

class myComboBox: public QComboBox
{
    Q_OBJECT

public:
    myComboBox(QWidget *parent = Q_NULLPTR);

protected:
    void paintEvent(QPaintEvent *e) Q_DECL_OVERRIDE;
};

#endif // MYCOMBOBOX_H
