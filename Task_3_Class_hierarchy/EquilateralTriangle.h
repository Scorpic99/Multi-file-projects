#pragma once
#include <iostream>
#include "Triangle.h"

class EquilateralTriangle : public Triangle {//равносторонний треугольник
public:
    void printFigure() override;
    EquilateralTriangle(int side);
};
