#include <core/Application.h>
#include <ui/MainWindow.h>
#include <settings/FileSettings.h>

int main(int argc, char* argv[]) {
    Application app(argc, argv);

    FileSettings settings;

    MainWindow mainWindow(&settings);
    mainWindow.show();

    return app.exec();
}
