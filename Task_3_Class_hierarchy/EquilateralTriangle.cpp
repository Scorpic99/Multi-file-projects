#include "EquilateralTriangle.h"

void EquilateralTriangle::printFigure() {
	std::cout << name << ":" << std::endl;
	std::cout << "�������: a=" << a << " b=" << b << " c=" << c << std::endl;
	std::cout << "����: A=" << A << " B=" << B << " C=" << C << std::endl;
}
EquilateralTriangle::EquilateralTriangle(int side) {
	a = side;
	b = side;
	c = side;
	A = 60;
	B = 60;
	C = 60;
	name = "�������������� �����������";
}