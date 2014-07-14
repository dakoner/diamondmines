#include "ui.h"
#include <QtGui/QApplication>
#include <QtGui/QGraphicsView>
#include <QtGui/QGraphicsRectItem>
#include <QtGui/QGraphicsLineItem>
#include <QtGui/QBrush>
UI::UI():
  _scene(new QGraphicsScene()),
  _view(new QGraphicsView(_scene)) {
  _view->setBackgroundBrush(QBrush(Qt::black));
  _view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
  _view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
  _view->show();
  _view->showFullScreen();
  QGraphicsRectItem *r = _scene->addRect( 0, 0, 10, 10);
  r->setPen(QPen(QColor(255, 0, 0)));
  r->setBrush(QBrush(QColor(0, 255, 0)));
  r->show();
}
