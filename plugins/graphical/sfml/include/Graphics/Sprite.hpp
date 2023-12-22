#pragma once
#include <iostream>
#include <string>
#include <memory>
#include <map>

#include <SFML/Graphics.hpp>

#include "SpriteException.hpp"
#include "TextureException.hpp"

#define SPRITE_CREATED "Sprite created successfully"

namespace ge {
    class Sprite {
        public:
            Sprite();
            ~Sprite();

            void createSprite(const std::string &name, const std::string &path);
            void setDebugMode(bool debugMode);
        private:
            std::map<std::string, std::shared_ptr<sf::Texture>> _textures;
            std::map<std::string, std::shared_ptr<sf::Sprite>> _sprites;
            bool _debug;
    };
}
