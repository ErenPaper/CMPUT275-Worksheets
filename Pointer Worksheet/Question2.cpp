#include <iostream>

int main() {
unsigned int a = 2, c = 3;
unsigned int* b = &a;
short d = *b*c**b*a-*b*5*a;

    std::cout << a << "\n";
    std::cout << *b << "\n";
    std::cout << c << "\n";
    std::cout << d << "\n";
}