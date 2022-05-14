//
// Created by tionu on 4/23/2022.
//

#include "UI.h"
using std::cout;
using std::cin;

///prints main menu and get a command form client
///@return an int command from client
unsigned int UI::getMainMenuCommand() {
    Menu::displayMainMenu();
    unsigned int command;
    cout << "\nEnter your input: ";
    while (!(cin >> command) || command < 0 || command > 6) {
        cin.clear();
        cin.ignore(10000, '\n');
        cout << "Command is an integer between 1 and 4\n";
        cout << "\nEnter your input: ";
    }
    return command;
}

///print exceptions
void UI::printException(const char* err){
    cout << err << "\n";
}

///prints category menu and get a command from client
///@return an int command form client
unsigned int UI::getCategoryMenuCommand() {
    Menu::displayCategoryMenu();
    unsigned int command;
    cout << "\nEnter your input: ";
    while(!(cin >> command) || command > 4 || command <= 0) {
        cin.clear();
        cin.ignore(10000,'\n');
        cout << "Command is an integer between 1 and 4\n";
        cout << "Enter your input: ";
    }
    return command;
}

///reading the polymorphic Product from client
///@return a Product
Product* UI::getProduct(unsigned int command) {
    std::string barcode = readBarcode();
    std::string name = readName();
    std::string expDate;
    double price = readPrice();
    unsigned  int pieces = readPieces();
    if(command == 1)
        expDate = readExpDate();
    unsigned int guarantee;
    if(command == 2)
        guarantee = readGuarantee();
    std::string category;
    if(command > 3)
        category = readCategory();
    if(command == 1)
        return new Groceries(barcode, name, "Groceries", price, pieces, expDate);
    else if(command == 2)
        return new Electronics(barcode, name, "Electronics", price, pieces, guarantee);
    else if(command == 3)
        return new PersonalCare(barcode, name, "Personal Care", price, pieces);
    else
        return new Product(barcode, name, category, price, pieces);
}

///prints the repository
///@param repo the given ProductRepo object
void UI::printRepo(const ProductRepo &repo) {
    if(!repo.getAllProducts().empty())
        cout << repo;
    else
        cout << "There are no Products in repository\n";
}

///prints message for successfully removed Product object from repository
///@param product the product removed from repository
void UI::successfullyRemoved(Product* product) {
    cout << "Element" << product->getBarcode() << " successfully removed from repository\n";
}

///read with validation barcode
///@return a string with barcode
std::string UI::readBarcode() {
    std::string barcode;
    do {
        cout << "Barcode: ";
        cin >> barcode;
        if (!Uitlity::validBarcode(barcode))
            cout << "Your barcode is invalid, a barcode should contain only digits and length of 7\n";
    } while(!Uitlity::validBarcode(barcode));
    return barcode;
}

///reads a name with validation
///@return a string with name
std::string UI::readName() {
    cout << "Name of product: ";
    std::string name;
    cin >> name;
    return name;
}

///reads expiration date with validation
///@return a string with expiration date
std::string UI::readExpDate() {
    int day, month, year;
    do {
        cout << "Expiration date format{day month year}: ";
        cin >> day >> month >> year;
        if(!Uitlity::validDate(day, month, year))
            cout << "Your input date is invalid, please respect the format\n";
    }
    while(!Uitlity::validDate(day, month, year));
    return std::to_string(day) + "/" +  std::to_string(month) + "/" + std::to_string(year);
}

///reads price with validation
///@return a double with price
double UI::readPrice() {
    double price;
    do {
        cout << "Price: ";
        while(!(cin >> price)) {
            cout << "Price is a number\n";
            std::cin.clear();
            std::cin.ignore(10000,'\n');
            cout << "Price: ";
        }
        if(price <= 0.00)
            cout << "This should be a positive number\n";
    } while(price <= 0.00);
    return price;
}

///reads pieces with validation
///@retun an int with pieces
unsigned int UI::readPieces() {
    unsigned int pieces;
    do {
        cout << "Pieces: ";
        while(!(cin >> pieces)) {
            cout << "Pieces is a number\n";
            std::cin.clear();
            std::cin.ignore(10000,'\n');
            cout << "Pieces: ";
        }
        if(pieces <= 0)
            cout << "This should be a positive number\n";

    } while(pieces <= 0);
    return pieces;
}

///reads guarantee with validation
///@return an int with guarantee
unsigned int UI::readGuarantee() {
    unsigned int guarantee;
    do {
        cout << "Guarantee: ";
        while(!(cin >> guarantee)) {
            cout << "Guarantee is a number\n";
            std::cin.clear();
            std::cin.ignore(10000,'\n');
            cout << "Guarantee: ";
        }
        if(guarantee <= 0)
            cout << "This should be a positive number\n";

    } while(guarantee <= 0);
    return guarantee;
}

///reads category
///@return a string with category
std::string UI::readCategory() {
    std::string category;
    cout << "Category: ";
    cin >> category;
    return category;
}

/// gets a barcode for removing an Product from repository with validation
///@return a string with barcode
std::string UI::getBarcode() {
    std::string barcode;
    do {
        std::cout << "Input your target product Barcode: ";
        std::cin >> barcode;
        if(!Uitlity::validBarcode(barcode))
            cout << "Your barcode is invalid\n";
    } while(!Uitlity::validBarcode(barcode));
    return barcode;
}

