#ifndef GUI_H
#define GUI_H

#include <QGridLayout>
#include <QAction>
#include <QMenuBar>
#include <QMenu>
#include <QToolBar>

#include "canvas.h"

class Gui: public QWidget
{
    Q_OBJECT

private:

    QGridLayout* mainLayout;

    Canvas* canvas;

    QToolBar* toolBar;

    QMenuBar* menuBar;
    QMenu *fileMenu;
    QMenu *aboutMenu;

    void createToolBar();
    void createMenuBar();

    QAction * drawLine;
    QAction * drawCircle;


public:
    Gui(QWidget* parent = nullptr);

};

#endif // GUI_H
