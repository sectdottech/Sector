#include "ui_ontheweb.h"
#include "guiutil.h"
#include "sectorgui.h"
#include "util.h"
#include "main.h"
#include <QtCore>
#include <QtGui>
#include <QtWebKit>

Ontheweb::Ontheweb(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Ontheweb),
    model(0)
{
    ui->setupUi(this);
}
    void Ontheweb::setModel(WalletModel *model)
{
    this->model = model;
    if(!model)
        return;
}

Ontheweb::~Ontheweb()
{
    delete ui;
}

void Ontheweb::on_Refresh_clicked()
{
    ui->webView->reload();
}

void Ontheweb::on_Home_clicked()
{
    ui->webView->load(QUrl("http://www.sect.tech"));
}