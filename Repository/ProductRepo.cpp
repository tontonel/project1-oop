//
// Created by tionu on 4/23/2022.
//

#include "ProductRepo.h"
#include "../Exception/IdenticException.h"
#include "../Exception/NoElementException.h"
#include <iostream>
#include <algorithm>

///default constructor
ProductRepo::ProductRepo()  = default;

///constructor
///@param _products a polymorphic vector with Product
ProductRepo::ProductRepo(const std::vector<Product*>& _products) {
    this->products = _products;
}

///copy constructor
ProductRepo::ProductRepo(const ProductRepo& other) {
    for(auto i : other.products)
        this->products.push_back(i);
}

///add products in repository
///@param newProduct given Product
///@attention this function throws an error if there is another product with same barcode in repository
void ProductRepo::addProducts(Product* newProduct) {
    for(auto i : this->products)
            if (i->getBarcode() == newProduct->getBarcode())
                throw IdenticException(newProduct->getBarcode());
    this->products.push_back(newProduct);
}

///remove Product from repository with barcode
///@param barcode  given barcode
///@attention this function doesn't throw any error if there is no Product with such barcode
Product* ProductRepo::removeProduct(const std::string& barcode) {
    Product* removedElement = nullptr;
    std::vector<Product*> newProducts;
    for (auto i : this->products) {
        if(barcode != i->getBarcode())
            newProducts.push_back(i);
        else
            removedElement = i;
    }
    this->products = newProducts;
    return removedElement;
}

///list of Products getter
///@return a const reference vector of Product
const std::vector<Product*>& ProductRepo::getAllProducts() const {
    return this->products;
}

///output operator
std::ostream& operator<<(std::ostream &out, const ProductRepo &repo) {
    out << "{\n";
    for(auto i : repo.products)
        out << *i << "\n\n";
    out << "}\n";
    return out;
}

///update a Product based on barcode
///@param product the new Product to update
///@param barcode to search for
///@attention this function throw an error if there is no Product with such barcode
void ProductRepo::updateProduct(const std::string &barcode, Product* product) {
    for(auto i : this->products)
        if (i->getBarcode() == barcode) {
            *i = *product;
            return;
        }
    throw NoElementException(barcode);
}

///Product getter with barcode
///@param barcode given barcode
Product* ProductRepo::getProductByBarcode(const std::string& barcode) {
    for(auto i : this->products)
        if(i->getBarcode() == barcode)
            return i;
    throw NoElementException(barcode);
}

///default assigment constructor
ProductRepo &ProductRepo::operator=(const ProductRepo & other) = default;
