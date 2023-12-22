#pragma once

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <memory>

#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

#include "VideoMode.hpp"
#include "Vector.hpp"

class Window {
    public:
        Window();
        ~Window();

        void createWindow(const std::string& title, const VideoMode& videoMode);
        void destroyWindow();
    private:
        sf::RenderWindow _window;
        std::string _windowTitle;
        VideoMode _videoMode;
};
