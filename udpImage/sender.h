#ifndef SENDER_H
#define SENDER_H

#include <QWidget>
#include <QUdpSocket>

namespace Ui {
class Sender;
}

class Sender : public QWidget
{
    Q_OBJECT

public:
    explicit Sender(QWidget *parent = 0);
    ~Sender();

private:
    Ui::Sender *ui;
    QUdpSocket *send;
    QString  path;
};

#endif // SENDER_H
