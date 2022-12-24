#pragma once
#include <iostream>

class Shapes {
public:
    virtual std::string get_name();
    virtual int get_sides();
    Shapes();
    virtual void printFigure();
protected:
    std::string name;
    int sides;
};
