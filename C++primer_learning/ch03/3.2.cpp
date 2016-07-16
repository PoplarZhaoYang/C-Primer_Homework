#include <iostream>
#include <string>

int main()
{
    using std::cin;
    using std::string;
    string str;
    while (getline(cin, str, ' ')) {
        std::cout << str << std::endl;
    }
    return 0;
}
