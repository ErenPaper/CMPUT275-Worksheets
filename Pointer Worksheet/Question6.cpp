#include <iostream>

int main() {

    const char* names[] = {"Zac", "Omid", "Paul", "Ron"};
    const char *alt = "Jim";

    std::cout << *(*(names+2) + 3) << "\n";

    names[0] = alt;

    std::cout << alt << "\n"; //It is valid, it prints 'Jim'
}