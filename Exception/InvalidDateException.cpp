//
// Created by tionu on 4/24/2022.
//

#include "InvalidDateException.h"

InvalidDateException::InvalidDateException() {
    this->message = "Your input date is invalid";
}

const char *InvalidDateException::what() const noexcept {
    return this->message.c_str();
}
