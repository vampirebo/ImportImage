#ifndef RECEIVER_H
#define RECEIVER_H

#include <QWidget>
#include <QUdpSocket>

namespace Ui {
class Receiver;
}

class Receiver : public QWidget
{
    Q_OBJECT

public:
    explicit Receiver(QWidget *parent = 0);
    ~Receiver();

private:
    Ui::Receiver *ui;
    QUdpSocket *recieve;
};

#endif // RECEIVER_H
