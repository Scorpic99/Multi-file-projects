#pragma once
#include <iostream>
#include "Quadrilateral.h"

class Rhomb : public Quadrilateral {//����
public:
    void printFigure() override;
    Rhomb(int a, int b, int c, int d, int A, int B);
};