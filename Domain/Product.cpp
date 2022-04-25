//
// Created by tionu on 4/23/2022.
//

#include "Product.h"
#include <utility>
#include <iostream>
#include <iomanip>
#include <sstream>

Product::Product():
    price{0.0},
    pieces{0}
    {}

Product::Product(std::string _barcode, std::string _name, std::string _category, double _price, unsigned int _pieces):
    barcode{std::move(_barcode)},
    name{std::move(_name)},
    category{std::move(_category)},
    price{_price},
    pieces{_pieces}
    {}

void Product::setName(const std::string &_name) {
    this->name = _name;
}

void Product::setCategory(const std::string& _category) {
    this->category = _category;
}

void Product::setPrice(const double& _price) {
    this->price = _price;
}

void Product::setPieces(const unsigned int& _pieces) {
    this->pieces = _pieces;
}

std::string Product::getName() const {
    return this->name;
}

std::string Product::getCategory() const {
    return this->category;
}

std::string Product::getBarcode() const {
    return this->barcode;
}

double Product::getPrice() const {
    return this->price;
}

unsigned int Product::getPieces() const {
    return this->pieces;
}

Product::Product(const Product& other) {
    this->barcode = other.barcode;
    this->name = other.name;
    this->price = other.price;
    this->category = other.category;
    this->pieces= other.pieces;
}

Product& Product::operator=(const Product &other) = default;

std::ostream &operator<<(std::ostream &out, const Product& product) {
    out << product.print();
    return out;
}

std::string Product::print() const {
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << price;
    return "barcode: " + this->barcode + "\nname of product: " + this->name + "\ncategory: " + this->category + "\nprice: " +
            std::to_string(this->price) + "\npieces: " + stream.str() + "\n";
}

bool Product::operator==(const Product &product1) const {
    return this->barcode == product1.getBarcode();
}


