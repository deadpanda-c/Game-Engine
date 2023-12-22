#include "Window/VideoMode.hpp"

VideoMode::VideoMode()
{
}

VideoMode::VideoMode(int width, int height)
{
    this->width = width;
    this->height = height;
    this->bpp = 32;
}

VideoMode::VideoMode(const VideoMode& copy)
{
    this->width = copy.width;
    this->height = copy.height;
    this->bpp = copy.bpp;
}

VideoMode& VideoMode::operator=(const VideoMode& copy)
{
    this->width = copy.width;
    this->height = copy.height;
    this->bpp = copy.bpp;
    return *this;
}
