//
// Created by tionu on 4/23/2022.
//

#include "IdenticException.h"

///constructor
IdenticException::IdenticException(const std::string& barcode) {
    this->message = "There exist another product in your list with the same barcode:" + barcode + "\n";
}

///exception message getter
const char *IdenticException::what() const noexcept {
    return message.c_str();
}
