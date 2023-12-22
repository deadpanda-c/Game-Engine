#pragma once

#include <exception>

#define ERROR_FILE_NOT_FOUND "Error, file not found."
#define ERROR_FILE_ALREADY_EXISTS "Error, file already exists"

namespace ge {
    class TextureException : public std::exception {
        public:
            TextureException(const char *message) : message(message) {}
            const char *what() const noexcept {return message; }
        private:
            const char *message;
    };
}
