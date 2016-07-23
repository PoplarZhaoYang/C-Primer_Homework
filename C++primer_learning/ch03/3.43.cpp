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

    for (const int (&i)[3] : A) {
        for (int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }

    for (size_t i = 0; i != 3; ++i) {
        for (size_t j = 0; j != 3; ++j) {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }

    for (const int (*i)[3] = A; i != A + 3; ++i) {
        for (const int *j = *i; j != *i + 3; ++j) {
            cout << *j << " ";
        }
        cout << endl;
    }
}

