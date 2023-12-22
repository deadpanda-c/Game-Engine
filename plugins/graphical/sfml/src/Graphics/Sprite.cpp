#include "Graphics.hpp"

ge::Sprite::Sprite()
{
    _debug = false;
}

void ge::Sprite::setDebugMode(bool debug)
{
    _debug = debug;
}

void ge::Sprite::createSprite(const std::string &name, const std::string &path)
{
    ge::Texture texture;
    sf::Sprite sprite;

    if (!texture.createTexture(name, path))
        throw ge::TextureException(ERROR_FILE_NOT_FOUND);
    sprite.setTexture(*texture.getTexture(name));
    _sprites[name] = std::make_shared<sf::Sprite>(sprite);
    if (_debug)
        std::cout << "[*] " << SPRITE_CREATED << name << std::endl;
}

ge::Sprite::~Sprite()
{
}
