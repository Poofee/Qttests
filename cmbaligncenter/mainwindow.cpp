#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QComboBox>
#include <QGridLayout>
#include <QLineEdit>
#include "mycombobox.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myComboBox *comboBox = new myComboBox(this);

    comboBox->setGeometry(10,10,200,100);

    comboBox->addItem(tr("Circle"));
    comboBox->addItem(tr("Pology"));

    comboBox->setEditable(true);
    comboBox->lineEdit()->setReadOnly(true);
    comboBox->lineEdit()->setAlignment(Qt::AlignCenter);
    comboBox->addItem("Nemesis");
    comboBox->addItem("Erebus");
    comboBox->addItem("Nix");
    for (int i = 0 ; i < comboBox->count() ; ++i) {
        comboBox->setItemData(i, Qt::AlignCenter, Qt::TextAlignmentRole);
    }
    comboBox->setEditable(false);

    ui->comboBox->setProperty("text-align","center");
    ui->comboBox->style()->unpolish(ui->comboBox);
    ui->comboBox->style()->polish(ui->comboBox);
    ui->comboBox->update();
    for (int i = 0 ; i < ui->comboBox->count() ; ++i) {
        ui->comboBox->setItemData(i, Qt::AlignCenter, Qt::TextAlignmentRole);
    }
    //ui->comboBox->setEditable(false);
    //QGridLayout *mainLayout = new QGridLayout(this);
    //mainLayout->addWidget(comboBox,0,0);
}

MainWindow::~MainWindow()
{
    delete ui;
}
