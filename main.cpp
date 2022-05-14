#include "./Controller/Controller.h"
#include "./UI/UI.h"
#include "./Exception/IdenticException.h"
#include "./Exception/OpenFileException.h"
#include "./Tests/Tests.h"

int main() {
    Tests::runAllTests();
    try {
        Controller controller;
        while (true) {
            unsigned int command1 = UI::getMainMenuCommand();
            if (command1 == 1) {
                unsigned int command2 = UI::getCategoryMenuCommand();
                if (command2 != 0) {
                    try {
                        Product *product = UI::getProduct(command2);
                        controller.addProduct(product);
                    } catch (const IdenticException &err) {
                        UI::printException(err.what());
                    } catch (const std::domain_error &err) {
                        UI::printException(err.what());
                    }
                }
            } else if (command1 == 2) {
                try {
                    UI::printRepo(controller.seeAlLProducts());
                } catch (const std::domain_error &err) {
                    UI::printException(err.what());
                }
            } else if (command1 == 4) {
                try {
                    std::string barcode = UI::getBarcode();
                    unsigned int command2 = UI::getCategoryMenuCommand();
                    Product *product = UI::getProduct(command2);
                    controller.updateProduct(barcode, product);
                } catch (const std::domain_error &err) {
                    UI::printException(err.what());
                }
            } else if (command1 == 3)
                try {
                    std::string barcode = UI::getBarcode();
                    controller.removeProduct(barcode);
                } catch (const std::domain_error &err) {
                    UI::printException(err.what());
                }
            else if (command1 == 5) {
                controller.undo();
            } else if (command1 == 6)
                controller.redo();
            else if (command1 == 0)
                exit(1);
        }
    }   catch (const OpenFileException& err) {
            UI::printException(err.what());
            exit(1);
    }

    return 0;
}
