#pragma once
#include <iostream>
#include "Shapes.h"

class Quadrilateral : public Shapes {
public:
    std::string get_name() override;
    int get_sides() override;
    Quadrilateral();

protected:
    int a;
    int b;
    int c;
    int d;
    int A;
    int B;
    int C;
    int D;
};