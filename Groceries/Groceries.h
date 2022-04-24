//
// Created by tionu on 4/24/2022.
//
#include "../Domain/Product.h"
#include <string>

#ifndef PROJECT1_GROCERY_H
#define PROJECT1_GROCERY_H


class Groceries : public Product {
private:
    std::string expDate;
public:
    Groceries();
    Groceries(const std::string&, const std::string&, const std::string&, double, unsigned int, const std::string& _expDate);
    const std::string& getExpDate() const;
    void setExpDate (const std::string&);
};


#endif //PROJECT1_GROCERY_H
