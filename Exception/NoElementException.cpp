//
// Created by tionu on 4/24/2022.
//

#include "NoElementException.h"

///constructor
NoElementException::NoElementException(const std::string& barcode) {
    this->message = "There is no element with this barcode: " + barcode + "\n";
}

///exception message getter
const char *NoElementException::what() const noexcept {
    return this->message.c_str();
}
