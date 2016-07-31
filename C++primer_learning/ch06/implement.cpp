#include <iostream>
#include "my.h"

int f(int x) {
    if (x < 2) return x;
    return f(x - 1) + f(x + 2);
}

void profile::print() {
    std::cout << str << std::endl;
}
