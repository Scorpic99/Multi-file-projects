#pragma once
#include <iostream>
#include "Quadrilateral.h"


class Rectangle : public Quadrilateral {//�������������
public:
    void printFigure() override;
    Rectangle(int oneSide, int twoSide);
};
