#pragma once
#include <iostream>
#include "Quadrilateral.h"

class Square : public Quadrilateral {//�������
public:
    void printFigure() override;
    Square(int side);
};


