//
// Created by tionu on 4/24/2022.
//
#include <exception>
#include <string>

#ifndef PROJECT1_INVALIDBARCODEEXCEPTION_H
#define PROJECT1_INVALIDBARCODEEXCEPTION_H


class InvalidBarcodeException: std::exception {

    private:
        std::string message;
    public:
        InvalidBarcodeException();
        const char* what() const noexcept override;
};


#endif //PROJECT1_INVALIDBARCODEEXCEPTION_H
