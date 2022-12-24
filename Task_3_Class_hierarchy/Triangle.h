#pragma once
#include <iostream>
#include "Shapes.h"

class Triangle : public Shapes {
public:
    std::string get_name() override;
    int get_sides() override;
    Triangle();
protected:
    int a;
    int b;
    int c;
    int A;
    int B;
    int C;
};