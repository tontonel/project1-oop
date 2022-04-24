//
// Created by tionu on 4/24/2022.
//
#include <string>
#include <exception>

#ifndef PROJECT1_NOELEMENTEXCEPTION_H
#define PROJECT1_NOELEMENTEXCEPTION_H


class NoElementException : std::exception {
private:
    std::string message;
public:
    NoElementException() = default;
    explicit NoElementException(const std::string&);
    const char* what() const noexcept override;
};


#endif //PROJECT1_NOELEMENTEXCEPTION_H
