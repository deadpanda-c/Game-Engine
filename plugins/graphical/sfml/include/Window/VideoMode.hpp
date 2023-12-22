#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

class VideoMode {
    public:
        VideoMode();
        VideoMode(int width, int height);
        VideoMode(const VideoMode& other);
        VideoMode& operator=(const VideoMode& other);
        ~VideoMode() = default;

        sf::VideoMode getVideoMode() const { return sf::VideoMode(width, height, bpp); }
        int width;
        int height;
        int bpp;
};
