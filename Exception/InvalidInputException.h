//
// Created by tionu on 4/24/2022.
//
#include <exception>
#include <string>

#ifndef PROJECT1_INVALIDINPUTEXCEPTION_H
#define PROJECT1_INVALIDINPUTEXCEPTION_H


class InvalidInputException : std::exception {
private:
    std::string message;
public:
    InvalidInputException();
    const char* what() const noexcept override;
};


#endif //PROJECT1_INVALIDINPUTEXCEPTION_H
