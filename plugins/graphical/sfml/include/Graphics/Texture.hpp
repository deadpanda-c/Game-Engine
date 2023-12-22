#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

#include "TextureException.hpp"

namespace ge {
    class Texture {
        public:
            Texture();
            ~Texture();

            int createTexture(const std::string &name, const std::string &path);
            std::shared_ptr<sf::Texture> getTexture(const std::string &name);
        private:
            std::map<std::string, std::shared_ptr<sf::Texture>> _textures;
    };
}
