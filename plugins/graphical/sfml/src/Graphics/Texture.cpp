#include "Graphics.hpp"

ge::Texture::Texture()
{
}

int ge::Texture::createTexture(const std::string &name, const std::string &path)
{
    sf::Texture texture;

    if (!texture.loadFromFile(path))
        throw ge::TextureException(ERROR_FILE_NOT_FOUND);
    if (_textures.find(name) != _textures.end())
        throw ge::TextureException(ERROR_FILE_ALREADY_EXISTS);
    _textures[name] = std::make_shared<sf::Texture>(texture);
    return 0;
}


ge::Texture::~Texture()
{
}
