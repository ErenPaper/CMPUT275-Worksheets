#include <iostream>

int main() {
    unsigned int a = 2, b = 3;
    unsigned int *c = &a, *d = &b;
    unsigned int **e = &c;

    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << *c << "\n";
    std::cout << *d << "\n";
    std::cout << **e << "\n" << "\n";

    c = d;

    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << *c << "\n";
    std::cout << *d << "\n";
    std::cout << **e << "\n" << "\n";

    a = 12;
    b = 17;

    std::cout << a << "\n";
    std::cout << b << "\n";
    std::cout << *c << "\n";
    std::cout << *d << "\n";
    std::cout << **e << "\n";
    
}