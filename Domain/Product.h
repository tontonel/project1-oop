//
// Created by tionu on 4/23/2022.
//
#include <string>
#ifndef PROJECT1_PRODUCT_H
#define PROJECT1_PRODUCT_H


class Product {
private:
    std::string barcode, name, category;
    double price;
    unsigned int pieces;
protected:
    virtual std::string print() const;
public:
    Product();
    Product(std::string barcode, std::string name, std::string category, double price, unsigned int pieces);
    Product(const Product&);
    Product& operator=(const Product& other);
    void setName(const std::string& name);
    void setCategory(const std::string& category);
    void setPrice(const double& price);
    void setPieces(const unsigned int& pieces);
    std::string getName() const;
    std::string getCategory() const;
    std::string getBarcode() const;
    double getPrice() const;
    unsigned int getPieces() const;
    bool operator==(const Product& product1) const;
    friend std::ostream& operator<<(std::ostream& out, const Product&);
};


#endif //PROJECT1_PRODUCT_H
