#pragma once


class ISprite {
    public:
        virtual ~ISprite() = default;

        virtual void createSprite(const std::string &name, const std::string &path) = 0;
        virtual void setDebugMode(bool debugMode) = 0;
};
