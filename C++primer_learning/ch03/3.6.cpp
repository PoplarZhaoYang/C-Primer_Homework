#include <iostream>
#include <string>
#include <stdio.h>

int main()
{
    using std::cin;
    using std::string;
    using std::endl;
    using std::cout;
    string str(10, 'a');
    str += string(10, 'b');
    cout << str << endl;
    for (auto &c : str) c = 'x';
    cout << str << endl;
    return 0;
}
