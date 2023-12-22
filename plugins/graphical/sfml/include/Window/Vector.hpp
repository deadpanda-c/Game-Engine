#pragma once
#include <iostream>
#include <string>

template <typename T>
class Vector {
    public:
        Vector();
        Vector(const Vector<T>&);
        Vector<T>& operator=(const Vector<T>&);
        Vector(T, T);
        ~Vector() = default;

        T x;
        T y;
};
