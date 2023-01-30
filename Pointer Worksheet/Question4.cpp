#include <iostream>

int main() {
    int a = 5;
    int &b = a;
    a = 7;

    std::cout << a << "\n";
    std::cout << b << "\n";

    int *c = &a;
    b = 12;

    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << *c << "\n";
}