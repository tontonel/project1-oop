//
// Created by tionu on 4/23/2022.
//
#include <vector>
#include "../Domain/Product.h"


#ifndef PROJECT1_PRODUCTREPO_H
#define PROJECT1_PRODUCTREPO_H

class ProductRepo {
private:
    std::vector<Product*> products;
public:
    ProductRepo();
    explicit ProductRepo(const std::vector<Product*>&);
    ProductRepo(const ProductRepo&);
    ProductRepo& operator=(const ProductRepo&);
    void addProducts(Product*);
    Product* removeProduct(const std::string& barcode);
    void updateProduct(const std::string& barcode, Product*);
    const std::vector<Product*>& getAllProducts() const;
    Product* getProductByBarcode(const std::string& barcode);
    friend std::ostream& operator<<(std::ostream& out, const ProductRepo& repo);

};


#endif //PROJECT1_PRODUCTREPO_H
