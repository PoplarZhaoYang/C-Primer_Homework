#include <iostream>
#include <string>

int main()
{
    using std::cin;
    using std::string;
    using std::endl;
    using std::cout;
    string str(10, 'a');
    str += string(10, 'b');
    cout << str << endl;
    for (char c : str) c = 'x';
    //没有改变，因为c是拷贝的新变量
    cout << str << endl;
    return 0;
}
