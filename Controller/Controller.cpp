//
// Created by tionu on 4/23/2022.
//


#include "Controller.h"

void Controller::setCommand1() {
    try {
        this->command1 = UI::getMainMenuCommand();
    } catch (const InvalidInputException& err) {
        UI::printException(err.what());
        this->command1 = 0;
    }
}

void Controller::setCommand2() {
    try {
        this->command2 = UI::getCategoryMenuCommand();
    } catch (const InvalidInputException& err) {
        UI::printException(err.what());
        this->command2 = 0;
    }
}

void Controller::addProduct() {
    try {
        Product* product = UI::getProduct(this->command2);
        this->repo.addProducts(product);
    } catch (const InvalidBarcodeException& err) {
        UI::printException(err.what());
    } catch (const InvalidDateException& err) {
        UI::printException(err.what());
    } catch (const InvalidQuantityException& err) {
        UI::printException(err.what());
    } catch (const IdenticException& err) {
        UI::printException(err.what());
    } catch (const InvalidInputException& err) {
        UI::printException(err.what());
    }
}

void Controller::seeAlLProducts() {
    UI::printRepo(repo);
}

void Controller::updateProduct() {
    try {
        Product* product = UI::getProduct(this->command2);
        std::string barcode = UI::getBarcode();
        this->repo.updateProduct(barcode, product);
    } catch (const InvalidBarcodeException& err) {
        UI::printException(err.what());
    } catch (const InvalidDateException& err) {
        UI::printException(err.what());
    } catch (const InvalidQuantityException& err) {
        UI::printException(err.what());
    } catch (const IdenticException& err) {
        UI::printException(err.what());
    } catch (const NoElementException& err) {
        UI::printException(err.what());
    } catch (const InvalidInputException& err) {
        UI::printException(err.what());
    }
}

void Controller::removeProduct() {
    try {
        std::string barcode = UI::getBarcode();
        Product* product = this->repo.removeProduct(barcode);
        UI::successfullyRemoved(product);
    }  catch (const InvalidBarcodeException& err) {
        UI::printException(err.what());
    }  catch (const NoElementException& err) {
        UI::printException(err.what());
    }

}

unsigned int Controller::getCommand1() const {
    return this->command1;
}

unsigned int Controller::getCommand2() const {
    return this->command2;
}

