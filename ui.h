#include <QtGui/QApplication>
#include <QtGui/QGraphicsView>

class UI {
public:
  UI();
private:
  QGraphicsView *_view;
  QGraphicsScene *_scene;
};
