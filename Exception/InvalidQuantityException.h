//
// Created by tionu on 4/24/2022.
//
#include <exception>
#include <string>

#ifndef PROJECT1_INVALIDPRICEEXCEPTION_H
#define PROJECT1_INVALIDPRICEEXCEPTION_H


class InvalidQuantityException : std::exception {
private:
    std::string message;
public:
    InvalidQuantityException() = default;
    explicit InvalidQuantityException(const std::string&);
    const char* what () const noexcept override;
};


#endif //PROJECT1_INVALIDPRICEEXCEPTION_H
