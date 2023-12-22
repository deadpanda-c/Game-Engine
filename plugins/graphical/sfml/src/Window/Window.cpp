#include "Window/Window.hpp"

Window::Window()
{
}

Window::~Window()
{
}

void Window::createWindow(const std::string &title, const VideoMode &videoMode)
{
    _windowTitle = title;
    _window.create(videoMode.getVideoMode(), _windowTitle, sf::Style::Default);
    std::cout << "Window created" << std::endl;
}

void Window::destroyWindow()
{
    _window.close();
    std::cout << "Window destroyed" << std::endl;
}

