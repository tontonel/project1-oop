//
// Created by tionu on 5/9/2022.
//

#ifndef PROJECT1_OPENFILEEXCEPTION_H
#define PROJECT1_OPENFILEEXCEPTION_H
#include <string>
#include <exception>


class OpenFileException : public std::exception {
private:
    std::string message;
public:
    explicit OpenFileException(std::string );
    const char* what () const noexcept override;
};


#endif //PROJECT1_OPENFILEEXCEPTION_H
