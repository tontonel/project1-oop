//
// Created by tionu on 4/24/2022.
//
#include "Groceries.h"
#include <iomanip>
#include <sstream>

Groceries::Groceries() : Product() {
    this->expDate = "";
}
Groceries::Groceries(const std::string& barcode,const std::string& name, const std::string& category, double price,
                     unsigned int pieces, const std::string& _expDate) : Product(barcode, name, category, price, pieces) {
    this->expDate = _expDate;}

void Groceries::setExpDate(const std::string& _expDate) {
    this->expDate = _expDate;
}

const std::string& Groceries::getExpDate() const {
    return this->expDate;
}

std::ostream &operator<<(std::ostream& out, const Groceries& grocery) {
    out << grocery.print();
    return out;
}

std::string Groceries::print() const {
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << this->getPrice();
    return "barcode: " + this->getBarcode() + "\nname of product: " + this->getName() + "\ncategory: " + this->getCategory() + "\nprice: " +
            stream.str() + "\npieces: " + std::to_string(this->getPieces()) + "\nExpiration date: " +
           this->expDate;
}
