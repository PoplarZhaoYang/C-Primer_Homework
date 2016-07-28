#include <iostream>
#include <vector>
#include <bitset>
using namespace std;

int main()
{
    int i;
    double d;
    const string *ps;
    char *pc;
    void *pv;
    //剥离底层const特性
    pv = const_cast<string*>(ps);
    //非剥离底层const都可以的强制转换   
    i = static_cast<int>(*pc);
    pv = static_cast<void*>(&d);
    //把void*降低等级为char*
    pc = reinterpret_cast<char*>(pv);
    return 0;
}
