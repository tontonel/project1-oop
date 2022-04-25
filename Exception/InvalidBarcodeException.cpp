//
// Created by tionu on 4/24/2022.
//

#include "InvalidBarcodeException.h"

const char *InvalidBarcodeException::what() const noexcept {
    return this->message.c_str();
}

InvalidBarcodeException::InvalidBarcodeException() {
    this->message = "Your barcode is invalid, a barcode should contain only digits and length of 7\n";
}
