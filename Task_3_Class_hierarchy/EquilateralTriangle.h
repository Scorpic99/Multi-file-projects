#pragma once
#include <iostream>
#include "Triangle.h"

class EquilateralTriangle : public Triangle {//�������������� �����������
public:
    void printFigure() override;
    EquilateralTriangle(int side);
};
