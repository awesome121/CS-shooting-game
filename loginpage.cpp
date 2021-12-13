#include "loginpage.h"
#include "./ui_loginpage.h"

LoginPage::LoginPage(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::LoginPage)
{
    ui->setupUi(this);
    this->setWindowTitle("CS-shooting-game");
//    ui->lightPistol->setStyleSheet("border: 10px solid green ");
}

LoginPage::~LoginPage()
{
    delete ui;
}

