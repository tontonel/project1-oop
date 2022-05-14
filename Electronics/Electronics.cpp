//
// Created by tionu on 4/24/2022.
//

#include "Electronics.h"
#include <iomanip>
#include <iostream>

Electronics::Electronics() : Product(){
    this->guarantee = 0;
}
///constructor
Electronics::Electronics(const std::string& barcode, const std::string& name, const std::string& category, double price,
                         unsigned int pieces, unsigned int _guarantee) :
             Product(barcode, name, category, price, pieces) {
    this->guarantee = _guarantee;
}

///Polymorphic print function
std::string Electronics::print() const {
    std::stringstream stream;
    stream << std::fixed << std::setprecision(2) << this->getPrice();
    return "barcode: " + this->getBarcode() + "\nname of product: " + this->getName() + "\ncategory: " + this->getCategory() + "\nprice: " +
           stream.str() + "\npieces: " + std::to_string(this->getPieces()) + "\nguarantee: " +
            std::to_string(this->guarantee);
}
///output stream for Electronics
///@see print()
std::ostream &operator<<(std::ostream& out, const Electronics& electronic) {
    out << electronic.print();
    return out;
}

///guarantee getter
///@return a natural number
unsigned int Electronics::getGuarantee() const {
    return this->guarantee;
}

void Electronics::setGuarantee(unsigned int _guarantee) {
    this->guarantee = _guarantee;
}
///Polymorphic read from Product
///@param in input stream
void Electronics::read(std::istream& in) {
    Product::read(in);
    in >> guarantee;
}


