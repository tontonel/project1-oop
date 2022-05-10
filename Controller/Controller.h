//
// Created by tionu on 4/23/2022.
//
#include "../Persistency/FileRepo.h"
#include "../Domain/Product.h"




#ifndef PROJECT1_CONTROLLER_H
#define PROJECT1_CONTROLLER_H


class Controller {
private:
    FileRepo* repo = nullptr;
public:
    Controller();
    ~Controller();
    void addProduct(Product*);
    const ProductRepo& seeAlLProducts();
    void updateProduct(const std::string&, Product*);
    void removeProduct(const std::string&);
};


#endif //PROJECT1_CONTROLLER_H
