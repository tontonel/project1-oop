//
// Created by tionu on 4/24/2022.
//

#include "InvalidInputException.h"

const char* InvalidInputException::what() const noexcept {
    return this->message.c_str();
}

InvalidInputException::InvalidInputException() {
    this->message = "Your input is invalid";
}
