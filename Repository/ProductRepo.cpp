//
// Created by tionu on 4/23/2022.
//

#include "ProductRepo.h"
#include "../Exception/IdenticException.h"
#include "../Exception/NoElementException.h"
#include <iostream>
#include <algorithm>

ProductRepo::ProductRepo()  = default;

ProductRepo::ProductRepo(const std::vector<Product*>& _products) {
    this->products = _products;
}

ProductRepo::ProductRepo(const ProductRepo& other) {
    for(auto i : other.products)
        this->products.push_back(i);
}

void ProductRepo::addProducts(Product* newProduct) {
    for(auto i : this->products)
            if (i->getBarcode() == newProduct->getBarcode())
                throw IdenticException(newProduct->getBarcode());
    this->products.push_back(newProduct);
}

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

const std::vector<Product*>& ProductRepo::getAllProducts() const {
    return this->products;
}

std::ostream& operator<<(std::ostream &out, const ProductRepo &repo) {
    out << "{\n";
    for(auto i : repo.products)
        out << *i << "\n\n";
    out << "}\n";
    return out;
}

void ProductRepo::updateProduct(const std::string &barcode, Product* product) {
    for(auto i : this->products)
        if (i->getBarcode() == barcode) {
            i = product;
            return;
        }
    throw NoElementException(barcode);
}

ProductRepo &ProductRepo::operator=(const ProductRepo & other) = default;
