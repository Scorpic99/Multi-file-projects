#pragma once
#include <iostream>
#include "Triangle.h"

class RectangularTriangle : public Triangle {//������������� �����������
public:
    void printFigure() override;
    RectangularTriangle(int a, int b, int c, int A, int B);
};
