#pragma once

#include <exception>

namespace ge {
    class SpriteException : public std::exception {
        public:
            SpriteException(const char* message) : message(message) {}
            const char* what() const noexcept { return message; }
        private:
            const char *message;
    };
}
