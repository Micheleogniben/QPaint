#include "gui.h"

Gui::Gui(QWidget* parent)
    : QWidget(parent),
      mainLayout(new QGridLayout()),
      drawLine(new QAction(QIcon(":/resources/icons/drawLine.png"), "Draw a Line", this)),
      drawCircle(new QAction(QIcon(":/resources/icons/drawCircle.png"), "Draw a Circle", this))
{
    canvas = new Canvas(this);
    createToolBar();
    createMenuBar();

    mainLayout->addWidget(menuBar,0,0);
    mainLayout->addWidget(toolBar,1,0);
    mainLayout->addWidget(canvas,1,1);
    setLayout(mainLayout);

}

void Gui::createToolBar()
{
    toolBar=new QToolBar();
    toolBar->addAction(drawLine);
    toolBar->addSeparator();
    toolBar->addAction(drawCircle);
    toolBar->addSeparator();
    toolBar->setIconSize(QSize(36, 36));
    toolBar->setOrientation(Qt::Vertical);

}

void Gui::createMenuBar()
{
    menuBar = new QMenuBar();

    // Menu "File"
    fileMenu = menuBar->addMenu(tr("&File"));

    // Azione "Save"
    QAction* saveAction = new QAction(QIcon(":/resources/icons/save.png"), tr("&Save"), this);
    fileMenu->addAction(saveAction);

    // Menu "About"
    aboutMenu = menuBar->addMenu(tr("&About"));

    // Azione "About"
    QAction* aboutAction = new QAction(QIcon(":/resources/icons/about.png"), tr("&About"), this);
    aboutMenu->addAction(aboutAction);
}

