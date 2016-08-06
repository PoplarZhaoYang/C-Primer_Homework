#include <iostream>
#include <string>


int main(int argc, char **argv) 
{
    std::string out;
    for (int i = 0; i != argc; ++i) out += (std::string)argv[i] + " ";
    std::cout << out << std::endl;
    return 0;
}
