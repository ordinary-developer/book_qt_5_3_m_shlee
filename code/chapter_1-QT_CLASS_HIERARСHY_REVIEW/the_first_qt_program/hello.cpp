#include <QtWidgets>

int main(int argc, char** argv) {
    QApplication application(argc, argv);
    QLabel label("Hello, World!");
    label.show();
    return application.exec();
}
