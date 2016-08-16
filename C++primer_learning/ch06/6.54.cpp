#include <iostream>
#include <string>
#include <vector>

int f(int , int);


int main() 
{
    std::vector<int (*)(int, int) > v;
    v.push_back(&f);
    v[0](1, 3);
    return 0;
}

int f(int a, int b) {
    std::cout << a + b << std::endl;
    return a + b;
}
