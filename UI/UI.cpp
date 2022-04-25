//
// Created by tionu on 4/23/2022.
//

#include "UI.h"

unsigned int UI::getMainMenuCommand() {
    Menu::displayMainMenu();
    unsigned int command;
    if( ! (std::cin >> command)) {
        std::cin.clear();
        throw InvalidInputException();
    }
    if (command <= 0 || command > 4)
        throw InvalidInputException();
    return command;
}

void UI::printException(const char* err){
    std::cout << err << "\n";
}

unsigned int UI::getCategoryMenuCommand() {
    Menu::displayCategoryMenu();
    unsigned int command;
    if(! (std::cin >> command)) {
        std::cin.clear();
        throw InvalidInputException();
    }
    if(command <= 0 || command > 4)
        throw InvalidInputException();
    return command;
}

Product* UI::getProduct(unsigned int command) {
    std::string barcode, category, name;
    double price;
    unsigned int pieces;
    std::cout << "Barcode: ";
    if (!(std::cin >> barcode)) {
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        throw InvalidInputException();
    }
    if(!Uitlity::validBarcode(barcode))
        throw InvalidBarcodeException();
    std::cout << "Name: ";
    if(!(std::cin >> name)) {
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        throw InvalidInputException();
    }
    std::cout << "Category: ";
    if (!(std::cin >> category)) {
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        throw InvalidInputException();
    }
    std::cout << "Price: ";
    if (!(std::cin >> price)) {
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        throw InvalidInputException();
    }
    if (price < 0.0000)
        throw InvalidQuantityException("price");
    std::cout << "Pieces: ";
    if (!(std::cin >> pieces)) {
        std::cin.clear();
        std::cin.ignore(10000,'\n');
        throw InvalidInputException();
    }
    if (pieces <= 0)
        throw InvalidQuantityException("pieces");
    if (command == 1) {
        std::string expDate;
        std::cout << "Expiration date(format {day month year}): ";
        unsigned int day, month, year;
        if (!(std::cin >> day)) {
            std::cin.clear();
            std::cin.ignore(10000,'\n');
            throw InvalidInputException();
        }
        if (!(std::cin >> month)) {
            std::cin.clear();
            std::cin.ignore(10000,'\n');
            throw InvalidInputException();
        }
        if (!(std::cin >> year)) {
            std::cin.clear();
            std::cin.ignore(10000,'\n');
            throw InvalidInputException();
        }
        if (!Uitlity::validDate(day, month, year))
            throw InvalidDateException();
        expDate = std::to_string(day) + "/" + std::to_string(month) + "/" + std::to_string(year);
        auto* pGroceries = new Groceries;
        Groceries product(barcode, name, category, price, pieces, expDate);
        *pGroceries = product;
        return pGroceries;
    }
    else if (command == 2) {
        unsigned int guarantee;
        std::cout << "Guarantee: ";
        if(!(std::cin >> guarantee)) {
            std::cin.clear();
            std::cin.ignore(10000,'\n');
            throw InvalidInputException();
        }
        if(guarantee <= 0)
            throw InvalidQuantityException("guarantee");
        auto* pElectronics = new Electronics;
        *pElectronics = Electronics(barcode, name, category, price, pieces, guarantee);
        return pElectronics;
    }
    else if (command == 3) {
        auto *pPersonalCare = new PersonalCare;
        *pPersonalCare = PersonalCare(barcode, name, category, price, pieces);
        return pPersonalCare;
    }
    else  {
        auto *pProduct = new Product;
        *pProduct = Product(barcode, name, category, price, pieces);
        return pProduct;
    }
}

void UI::printRepo(const ProductRepo &repo) {
    if(!repo.getAllProducts().empty())
        std::cout << repo;
    else
        std::cout << "There are no Products in repository\n";
}

std::string UI::getBarcode() {
    std::string barcode;
    std::cout << "Barcode: ";
    std::cin >> barcode;
    if(!Uitlity::validBarcode(barcode))
        throw InvalidBarcodeException();
    return barcode;
}

void UI::successfullyRemoved(Product* product) {
    std::cout << "Element" << *product << "Successfully removed from repository\n";
}
