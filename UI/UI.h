//
// Created by tionu on 4/23/2022.
//
#include "Menu.h"
#include <iostream>
#include "../Exception/InvalidInputException.h"
#include "../Groceries/Groceries.h"
#include "../Electronics/Electronics.h"
#include "../PersonalCare/PersonalCare.h"
#include "../Domain/Product.h"
#include "../Exception/InvalidBarcodeException.h"
#include "../Exception/InvalidQuantityException.h"
#include "../Utilty/Uitlity.h"
#include "../Exception/InvalidDateException.h"
#include "../Repository/ProductRepo.h"

#ifndef PROJECT1_UI_H
#define PROJECT1_UI_H


class UI {

public:
    static unsigned int getMainMenuCommand();
    static void printException(const char*);
    static unsigned int getCategoryMenuCommand();
    static Product* getProduct(unsigned int command);
    static void printRepo(const ProductRepo& repo);
    static std::string getBarcode();
    static void successfullyRemoved(Product*);
};


#endif //PROJECT1_UI_H
