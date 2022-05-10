//
// Created by tionu on 5/9/2022.
//

#include "OpenFileException.h"

#include <utility>

OpenFileException::OpenFileException(std::string  _message) : message(std::move(_message)) {}

const char *OpenFileException::what() const noexcept {
    return message.c_str();
}
