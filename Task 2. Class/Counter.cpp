#include "Counter.h"
void Counter::plus() {
    this->num1 += 1;
}
void Counter::minus() {
    this->num1 -= 1;
}
Counter::Counter() {
    this->num1 = 1;
}
Counter::Counter(int num) : num1(num) { }
int Counter::get_num1() {
    return num1;
}
