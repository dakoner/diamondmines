#include <QtGui/QApplication>
#include <QtGui/QGraphicsView>
#include <QtGui/QGraphicsRectItem>
#include <QtGui/QGraphicsLineItem>
#include <QtGui/QBrush>

int main(int argc, char **argv) {
  QApplication app( argc, argv );
  QGraphicsScene scene;
  QGraphicsView view(&scene);
  view.setBackgroundBrush(QBrush(Qt::black));
  view.setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
  view.setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
  view.setDragMode(QGraphicsView::ScrollHandDrag);
  view.show();
  // view.showFullScreen();

  QGraphicsRectItem *r = scene.addRect(-50, -50, 10, 10);
  r->setPen(QPen(QColor(255, 0, 0)));
  r->setBrush(QBrush(QColor(0, 255, 0)));
  r->show();
  r = scene.addRect(0, 0, 10, 10);
  r->setPen(QPen(QColor(255, 0, 0)));
  r->setBrush(QBrush(QColor(0, 255, 0)));
  r->show();
  r = scene.addRect(200, 200, 10, 10);
  r->setPen(QPen(QColor(255, 0, 0)));
  r->setBrush(QBrush(QColor(0, 255, 0)));
  r->show();

  scene.setSceneRect(-100, -100, 100, 100);
  view.resize(200, 200);
  return app.exec();
}
