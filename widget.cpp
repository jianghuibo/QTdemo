#include "widget.h"
#include "ui_widget.h"
#include<QPushButton>
#include<QLineEdit>
#include<QVBoxLayout>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPushButton *p1 = new QPushButton("hello",this);
    QPushButton *p2 = new QPushButton("world",this);
    QVBoxLayout *vbox = new QVBoxLayout;
    vbox->addWidget(p1);
    vbox->addWidget(p2);
    //新增加的内容
    //接入
    //子啊
    QVBoxLayout *vbox2 = new QVBoxLayout;

    this->setLayout(vbox);

}

Widget::~Widget()
{
    delete ui;
}
