#pragma once
#include <iostream>
#include "Triangle.h"

class IsoscelesTriangle : public Triangle {//�������������� �����������
public:
    void printFigure() override;
    IsoscelesTriangle(int a, int b, int A, int B, int C);
};