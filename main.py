#!/usr/bin/python3
import sys
from PyQt5.QtCore import *
from PyQt5.QtGui import *
from PyQt5.QtWidgets import *

if __name__ == '__main__':

    app = QApplication(sys.argv)
    scene = QGraphicsScene()
    view = QGraphicsView(scene)
    view.setBackgroundBrush(QBrush(Qt.black));
    view.setHorizontalScrollBarPolicy(Qt.ScrollBarAlwaysOn);
    view.setVerticalScrollBarPolicy(Qt.ScrollBarAlwaysOn);
    view.show();
    r = scene.addRect(-50, -50, 10, 10);
    r.setPen(QPen(Qt.red))
    r.setBrush(QBrush(Qt.blue))
    r.show()
    sys.exit(app.exec_())
