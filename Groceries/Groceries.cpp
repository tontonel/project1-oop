//
// Created by tionu on 4/24/2022.
//
#include "Groceries.h"
#include <iomanip>
#include <sstream>

Groceries::Groceries() : Product() {
    this->expDate = "";
}

///constructor
Groceries::Groceries(const std::string& barcode,const std::string& name, const std::string& category, double price,
                     unsigned int pieces, const std::string& _expDate) : Product(barcode, name, category, price, pieces) {
    this->expDate = _expDate;
}

///ExpDate setter
///@param _expDate given expiration date
void Groceries::setExpDate(const std::string& _expDate) {
    this->expDate = _expDate;
}

///expDate setter
///@return a string with expiration date
const std::string& Groceries::getExpDate() const {
    return this->expDate;
}

///print function override
///@return a string with output
std::string Groceries::print() const {
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << this->getPrice();
    return "barcode: " + this->getBarcode() + "\nname of product: " + this->getName() + "\ncategory: " + this->getCategory() + "\nprice: " +
            stream.str() + "\npieces: " + std::to_string(this->getPieces()) + "\nExpiration date: " +
           this->expDate;
}

///read function override
///@param in return through reference an input stream
void Groceries::read(std::istream& in) {
    Product::read(in);
    in >> expDate;
}
