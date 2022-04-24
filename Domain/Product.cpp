//
// Created by tionu on 4/23/2022.
//

#include "Product.h"
#include <utility>
#include <iostream>

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

bool operator==(const Product &product1, const Product &product2) {
    return product1.barcode == product2.barcode && product1.name == product2.name && product1.category == product2.category &&
    product2.price == product1.price && product2.pieces == product1.pieces;
}

std::ostream &operator<<(std::ostream &out, const Product& product) {
    out << product.barcode << "\n";
    out << product.category << "\n";
    out << product.name << "\n";
    out << product.price << "\n";
    out << product.pieces << "\n";
    return out;
}


