//
// Created by tionu on 4/23/2022.
//


#include "Controller.h"


Controller::Controller(){
    repo = new FileRepo("../resources/data.csv");
}

void Controller::addProduct(Product* product) {
    if(repo == nullptr)
        throw std::domain_error("repo is nullptr\n");
    repo->addProducts(product);
}

const ProductRepo& Controller::seeAlLProducts() {
    if(repo == nullptr)
        throw std::domain_error("repo is nullptr\n");
    return *repo;
}

void Controller::updateProduct(const std::string& barcode, Product* product) {
    if(repo == nullptr)
        throw std::domain_error("repo is nullptr\n");
    return repo->updateProduct(barcode, product);
}

void Controller::removeProduct(const std::string& barcode) {
    if(repo == nullptr)
        throw std::domain_error("repo is nullptr\n");
    repo->removeProduct(barcode);
}

Controller::~Controller() {
    delete repo;
}

