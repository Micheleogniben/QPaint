#include <QApplication>
#include <QIcon>

#include "gui.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QIcon appIcon(":/resources/icons/appIcon.png");
    app.setWindowIcon(appIcon);

    Gui gui;
    gui.show();

    return app.exec();
}
