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
///constructor for Product class
Product::Product(std::string _barcode, std::string _name, std::string _category, double _price, unsigned int _pieces):
    barcode{std::move(_barcode)},
    name{std::move(_name)},
    category{std::move(_category)},
    price{_price},
    pieces{_pieces}
    {}
///setting name of Product
///@param _name the given name
void Product::setName(const std::string &_name) {
    this->name = _name;
}
///setting category of Product
///@param _category the given category
void Product::setCategory(const std::string& _category) {
    this->category = _category;
}

///setting price of Product
///@param _price the given price
void Product::setPrice(const double& _price) {
    this->price = _price;
}

///setting pieces of Product
///@param _pieces the given pieces
void Product::setPieces(const unsigned int& _pieces) {
    this->pieces = _pieces;
}
///name getter
///@return a string with name of Product
std::string Product::getName() const {
    return this->name;
}

///category getter
///@return a string with category of Product
std::string Product::getCategory() const {
    return this->category;
}

///barcode getter
///@return a string with barcode of Product
std::string Product::getBarcode() const {
    return this->barcode;
}

///price getter
///@return a double with price of Product
double Product::getPrice() const {
    return this->price;
}

///pieces getter
///@return an int with pieces of Product
unsigned int Product::getPieces() const {
    return this->pieces;
}

///Product copy constructor
Product::Product(const Product& other) {
    this->barcode = other.barcode;
    this->name = other.name;
    this->price = other.price;
    this->category = other.category;
    this->pieces= other.pieces;
}

///Product default assigment constructor
Product& Product::operator=(const Product &other) = default;


///ostream operator for Product
///@param out the output stream
///@param product the given Product
///@see print()
std::ostream &operator<<(std::ostream &out, const Product& product) {
    out << product.print();
    return out;
}

///virtual print function for polymorphic class
///@return a string with output content
std::string Product::print() const {
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << price;
    return "barcode: " + this->barcode + "\nname of product: " + this->name + "\ncategory: " + this->category + "\nprice: " +
            stream.str() + "\npieces: " + std::to_string(this->pieces) + "\n";
}

///equality operator
bool Product::operator==(const Product &product1) const {
    return this->barcode == product1.getBarcode();
}

///virtual function read polymorphic Product objects
void Product::read(std::istream& in) {
    in >> this->barcode >> this->name >> this->category >> this->price >> this->pieces;
}

///input stream operator
///@param in input stream
///@param product given product
///@see read()
std::istream &operator>>(std::istream& in, Product& product) {
    product.read(in);
    return in;
}



