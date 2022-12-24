#include <iostream>
#include "Shapes.h"
#include "Triangle.h"
#include "RectangularTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrilateral.h"
#include "Square.h"
#include "Rectangle.h"
#include "Parallelogram.h"
#include "Rhomb.h"


void print_shapes(Shapes* shapes) {
    int a = 6, b = 26, c = 64, A = 7, B = 340, C = 45;

    shapes = new RectangularTriangle(a, b, c, A, B);
    shapes->printFigure();
    shapes = new IsoscelesTriangle(a, b, 3, 3, 3);
    shapes->printFigure();
    shapes = new EquilateralTriangle(61);
    shapes->printFigure();
    shapes = new Rectangle(2, 2);
    shapes->printFigure();
    shapes = new Square(5);
    shapes->printFigure();
    shapes = new Parallelogram(3, 45, 6, 45);
    shapes->printFigure();
    shapes = new Rhomb(a, b, c, 9, 55, 66);
    shapes->printFigure();

}


int main()
{
    setlocale(LC_ALL, "Rus");

    Shapes* shapes = new Shapes;
    Triangle triangle;
    Quadrilateral quadrilateral;

    print_shapes(shapes);

}


