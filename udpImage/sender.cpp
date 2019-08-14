#include "sender.h"
#include "ui_sender.h"
#include <QFileDialog>
#include <QBuffer>
#include <QDataStream>

Sender::Sender(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Sender)
{
    ui->setupUi(this);
    //选择图片
    connect(ui->select,QPushButton::clicked,[=](){
        path = QFileDialog::getOpenFileName(this,"选择图片","F:\\QTworkspace\\Image");
        if(!path.isEmpty()){
            ui->lineEdit->setText(path);
            QPixmap pix(path);//构造，直接把文件的路径给出
            ui->pic->setPixmap(pix);
        }

    });
    //udp的套接字
    send = new QUdpSocket(this);
    //绑定端口号
    send->bind(9999);

    connect(ui->send,QPushButton::clicked,[=](){
        //申请内存空间，用数据流进行传输
        QBuffer buf;
        buf.open(QIODevice::WriteOnly);//设备，写操作

        //准备数据
        QImage img(path);
        QDataStream stream(&buf);
        stream << img ;
        //发送
        send->writeDatagram(buf.buffer(),QHostAddress::LocalHost,8888);
        buf.close();
    });


}

Sender::~Sender()
{
    delete ui;
}
