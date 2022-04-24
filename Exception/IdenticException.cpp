//
// Created by tionu on 4/23/2022.
//

#include "IdenticException.h"

IdenticException::IdenticException(const std::string& barcode) {
    this->message = "There exist another product in your list with the same barcode:" + barcode + "\n";
}

const char *IdenticException::what() const noexcept {
    return message.c_str();
}
