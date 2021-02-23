#include "viewprofilewindow.h"
#include "ui_viewprofilewindow.h"

ViewProfileWindow::ViewProfileWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ViewProfileWindow)
{
    ui->setupUi(this);
}

ViewProfileWindow::~ViewProfileWindow()
{
    delete ui;
}
