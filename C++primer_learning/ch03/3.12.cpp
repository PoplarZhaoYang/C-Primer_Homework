#include <iostream>
#include <vector>

int main()
{
    std::vector<int> vec;
    for (int x; std::cin >> x; vec.push_back(x)) ;
    return 0;
}
