#include "sender.h"
#include <QApplication>
#include "receiver.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Sender w;
    w.setWindowTitle("发送方");
    w.show();

    Receiver r;
    r.setWindowTitle("接受方");
    r.show();
    return a.exec();
}
