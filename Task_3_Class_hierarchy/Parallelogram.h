#pragma once
#include <iostream>
#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral {//��������������
public:
    void printFigure() override;
    Parallelogram(int a, int b, int A, int B);
};