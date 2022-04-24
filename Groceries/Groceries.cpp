//
// Created by tionu on 4/24/2022.
//
#include "Groceries.h"

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
