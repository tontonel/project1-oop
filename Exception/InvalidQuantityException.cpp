//
// Created by tionu on 4/24/2022.
//

#include "InvalidQuantityException.h"

const char *InvalidQuantityException::what() const noexcept {
    return this->message.c_str();
}

InvalidQuantityException::InvalidQuantityException(const std::string& type) {
    this->message = "Invalid Input, the " + type  +  " should be positive";
}
