#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>

void add_up_to(std::initializer_list<int> v) {
    int sum = 0;
    for (auto &i : v) {
        sum += i;
    }
    std::cout << sum << std::endl;
}

int main() 
{
    add_up_to({3, 5, 7});
    return 0;
}
