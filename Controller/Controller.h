//
// Created by tionu on 4/23/2022.
//
#include "../Repository/ProductRepo.h"
#include "../Domain/Product.h"
#include "../Groceries/Groceries.h"
#include "../Electronics/Electronics.h"
#include "../PersonalCare/PersonalCare.h"
#include "../Exception/NoElementException.h"
#include "../UI/UI.h"
#include "../Exception/IdenticException.h"
#include "../Exception/InvalidInputException.h"
#include "../Exception/InvalidDateException.h"
#include "../Exception/InvalidBarcodeException.h"
#include "../Exception/InvalidQuantityException.h"


#ifndef PROJECT1_CONTROLLER_H
#define PROJECT1_CONTROLLER_H


class Controller {
private:
    ProductRepo repo;
    unsigned int command1;
    unsigned int command2;
public:
    void setCommand1();
    void setCommand2();
    void addProduct();
    void seeAlLProducts();
    void updateProduct();
    void removeProduct();
    unsigned int getCommand1() const;
    unsigned int getCommand2() const;
};


#endif //PROJECT1_CONTROLLER_H
