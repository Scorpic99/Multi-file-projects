#pragma once
#include <iostream>
#include "Quadrilateral.h"


class Rectangle : public Quadrilateral {//прямоугольник
public:
    void printFigure() override;
    Rectangle(int oneSide, int twoSide);
};
