#include <iostream>
#include <string>
#include <vector>
#include <initializer_list>
typedef std::string strings[10];
std::string A[10];

std::string (&func(int a))[10];
strings &func(int a);
auto func(int a) -> std::string(&)[10];
decltype(A) &func(int a);

int main() 
{
    return 0;
}
