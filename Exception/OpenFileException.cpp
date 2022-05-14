//
// Created by tionu on 5/9/2022.
//

#include "OpenFileException.h"

#include <utility>

///constructor
OpenFileException::OpenFileException(std::string  _message) : message(std::move(_message)) {}


///exception message getter
const char *OpenFileException::what() const noexcept {
    return message.c_str();
}
