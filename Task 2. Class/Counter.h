#pragma once

class Counter {
public:
    void plus();
    void minus();
    Counter();
    Counter(int num);
    int get_num1();
private:
    int num1;
};
