#include <QtWidgets>

int main(int argc, char** argv) {
    QApplication app(argc, argv);
    QWidget widget{};
    QPixmap pixmap{":/clock.png"};
    QCursor cursor{pixmap};

    widget.setCursor(cursor);
    widget.resize(180, 100);
    widget.show();

    return app.exec();
}
