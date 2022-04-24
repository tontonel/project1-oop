//
// Created by tionu on 4/23/2022.
//

#include "ProductRepo.h"
#include "../Exception/IdenticException.h"
#include "../Exception/NoElementException.h"
#include <iostream>
#include <algorithm>

ProductRepo::ProductRepo()  = default;

ProductRepo::ProductRepo(const std::vector<Product>& _products) {
    this->products = _products;
}

ProductRepo::ProductRepo(const ProductRepo& other) {
    for(const auto& i : other.products)
        this->products.push_back(i);
}

void ProductRepo::addProducts(const Product& newProduct) {
    for(const auto& i : this->products)
            if (i.getBarcode() == newProduct.getBarcode())
                throw IdenticException(newProduct.getBarcode());
    this->products.push_back(newProduct);
}

Product ProductRepo::removeProduct(const std::string& barcode) {
    Product removedElement;
    auto it = std::remove_if(this->products.begin(), this->products.end(), [&barcode, &removedElement](const Product& product) {
        if(product.getBarcode() == barcode) removedElement = product;
        return barcode == product.getBarcode();
    });
    return removedElement;
}

const std::vector<Product>& ProductRepo::getAllProducts() const {
    return this->products;
}

std::ostream& operator<<(std::ostream &out, const ProductRepo &repo) {
    for(const auto &i : repo.products)
        out << i << "\n";
    return out;
}

void ProductRepo::updateProduct(const std::string &barcode, const Product& product) {
    auto it = std::find(this->products.begin(), this->products.end(), [&barcode](const Product& product){
        return barcode == product.getBarcode();
    });
    if(it == this->products.end())
        throw NoElementException(barcode);
    *it = product;
}

ProductRepo &ProductRepo::operator=(const ProductRepo & other) = default;
