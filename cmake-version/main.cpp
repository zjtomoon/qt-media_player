#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
    QLabel label(QString("Hello Qt%1").arg(int(QT_VERSION >> 16)));
    label.setAlignment(Qt::AlignCenter);
    label.resize(200,100);
    label.show();

    return app.exec();
}
