#pragma once
#include <iostream>
#include "Triangle.h"

class RectangularTriangle : public Triangle {//прямоугольный треугольник
public:
    void printFigure() override;
    RectangularTriangle(int a, int b, int c, int A, int B);
};
