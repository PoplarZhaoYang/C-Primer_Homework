#include <iostream>
#include <cstdio>
#include <vector>


bool ispre(std::vector<int> &a, std::vector<int> &b) {
    if (a.size() > b.size()) {
        return ispre(b, a);
    } else {
        for (auto i = 0; i != (int)a.size(); ++i) if (a[i] != b[i]) return false;
    }
    return true;

}

int main()
{
    std::vector<int> A = {0, 1, 1, 2};
    std::vector<int> B = {0, 1, 1, 2, 3, 5, 8};
    std::cout << (ispre(A, B) ? "YES" : "NO") << std::endl;
    return 0;
}
