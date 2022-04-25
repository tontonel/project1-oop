//
// Created by tionu on 4/24/2022.
//
#include <string>
#include <exception>

#ifndef PROJECT1_INVALIDDATEEXCEPTION_H
#define PROJECT1_INVALIDDATEEXCEPTION_H


class InvalidDateException : std::exception {
private:
    std::string message;
public:
    InvalidDateException();
    const char* what() const noexcept override;
};


#endif //PROJECT1_INVALIDDATEEXCEPTION_H
