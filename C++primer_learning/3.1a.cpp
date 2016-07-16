#include <iostream>

using std::cin;
using std::cout;

int main()
{
    int sum = 0;
    for (int v = 1; v <= 10; ++v) sum += v;
    using std::endl;
    cout << "The sum [1, 10] is " << sum << endl;
    return 0;
}
