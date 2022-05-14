//
// Created by tionu on 4/24/2022.
//

#include "PersonalCare.h"

PersonalCare::PersonalCare() : Product(){}
///constructor
PersonalCare::PersonalCare(const std::string& barcode, const std::string& name, const std::string& category, double price, unsigned int pieces) :
              Product(barcode, name, category, price, pieces) {}

