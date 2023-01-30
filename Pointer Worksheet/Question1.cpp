#include <iostream>

int main() {
    int a = 6, c = 3;
    int *b = &a;
    *b = c;

    std::cout << a << "\n";
    std::cout << *b << "\n";
    std::cout << c << "\n";
}