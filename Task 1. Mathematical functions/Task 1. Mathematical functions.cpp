#include <iostream>
#include "First Math Func.h"

int main()
{
    setlocale(LC_ALL, "Rus");
    int num1 = 0, num2 = 0, oper = 0;
    std::cout << "Введите первое число: " << std::endl;
    std::cin >> num1;
    std::cout << "Введите второе число: " << std::endl;
    std::cin >> num2;
    std::cout << "Введите опперацию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): " << std::endl;
    std::cin >> oper;

    if (oper == 1) {
        std::cout << num1 << " прибавить " << num2 << " = " << math_plus(num1, num2) << std::endl;
    }
    else if (oper == 2) {
        std::cout << num1 << " отнять " << num2 << " = " << math_minus(num1, num2) << std::endl;
    }
    else if (oper == 3) {
        std::cout << num1 << " умножить на " << num2 << " = " << math_multiply(num1, num2) << std::endl;
    }
    else if (oper == 4) {
        std::cout << num1 << " поделить на " << num2 << " = " << math_division(num1, num2) << std::endl;
    }
    else if (oper == 5) {
        std::cout << num1 << " в степени " << num2 << " = " << math_exponentation(num1, num2) << std::endl;
    }
    else {
        std::cout << "Не правельный ввод!";
    }

}
