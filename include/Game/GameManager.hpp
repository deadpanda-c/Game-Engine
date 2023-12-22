#pragma once
#include <isotream>
#include <string>
#include <memory>
#include <map>

class GameManager {
    public:
        GameManager();
        ~GameManager();

        void init();
        void update();
        void draw();
    private:
};
