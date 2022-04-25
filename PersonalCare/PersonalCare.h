//
// Created by tionu on 4/24/2022.
//
#include "../Domain/Product.h"
#include <string>

#ifndef PROJECT1_PERSONALCARE_H
#define PROJECT1_PERSONALCARE_H


class PersonalCare : public Product{
private:
public:
    PersonalCare();
    PersonalCare(const std::string&, const std::string&, const std::string&, double, unsigned int);
};


#endif //PROJECT1_PERSONALCARE_H
