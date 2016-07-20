#include <iostream>
#include <iterator>
int A[] = {1, 3, 7, 2, 8, 0, 5, 0, 5};

int main()
{
    auto head = std::begin(A), tail = std::end(A);
    while (head != tail) {
        *head = 0;
        ++head;
    }
    for (head = std::begin(A), tail = std::end(A);  head != tail; ++head) {
        std::cout << *head << std::endl;
    }
    return 0;
}
