#include <iostream>
#include <string>
using namespace std;
using inte = int[3][3];

int main() {
    inte A = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9},
    };

    for (auto &i : A) {
        for (auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }

    for (auto i = 0; i != 3; ++i) {
        for (auto j = 0; j != 3; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    for (auto i = A; i != A + 3; ++i) {
        for (const auto *j = *i; j != *i + 3; ++j) {
            cout << *j << " ";
        }
        cout << endl;
    }
}

