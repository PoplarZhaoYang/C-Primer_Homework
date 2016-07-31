#include <iostream>
#include <cstdio>
#include <vector>

int f(int x) {
    static int fcnt;
    ++fcnt;
    std::cout << x << ": " << fcnt << std::endl;
    if (x < 2) return x;
    return f(x - 1) + f(x - 2);
}

int main()
{
    std::cout << f(10) << std::endl;
    return 0;
}
