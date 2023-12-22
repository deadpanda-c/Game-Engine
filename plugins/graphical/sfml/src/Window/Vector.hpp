#include "Window/Vector.hpp"

Vector::Vector()
{
    x = 0;
    y = 0;
}

Vector::Vector(const Vector<T>& v)
{
    x = v.x;
    y = v.y;
}

Vector::Vector(T x, T y)
{
    this->x = x;
    this->y = y;
}

Vector<T>& Vector::operator=(const Vector<T>& v)
{
    x = v.x;
    y = v.y;
    return *this;
}
