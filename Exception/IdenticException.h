//
// Created by tionu on 4/23/2022.
//
#include <exception>
#include <string>

#ifndef PROJECT1_IDENTICEXCEPTION_H
#define PROJECT1_IDENTICEXCEPTION_H


class IdenticException : std::exception {
private:
    std::string message;
public:
    IdenticException() = default;
    explicit IdenticException(const std::string& barcode);
    const char* what() const noexcept override;
};


#endif //PROJECT1_IDENTICEXCEPTION_H
