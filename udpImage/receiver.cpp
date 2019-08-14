#include "receiver.h"
#include "ui_receiver.h"
#include <QBuffer>
#include <QDataStream>
#include <QPixmap>

Receiver::Receiver(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Receiver)
{
    ui->setupUi(this);
    ui->setupUi(this);
    recieve = new QUdpSocket(this);
    recieve->bind(8888);

    //监听信号
    connect(recieve,&QUdpSocket::readyRead,[=](){
        //报文的大小
        qint64 size = recieve->pendingDatagramSize();
        QByteArray array(size,0);

        recieve->readDatagram(array.data(),size);
        //申请空间
        QBuffer buf(&array);
        buf.open(QIODevice::ReadOnly);
        QDataStream stream(&buf);
        QImage img;
        stream >> img;
        buf.close();
        QPixmap pix = QPixmap::fromImage(img);
        ui->label->setPixmap(pix);

    });
}

Receiver::~Receiver()
{
    delete ui;
}
