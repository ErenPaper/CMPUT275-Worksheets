#include <iostream>

int main() {

    int array[] = {1, 8, 4, 3, 0};
    int *ptr1 = array, *ptr2 = &array[0];

    std::cout << *ptr1 << "\n" << *ptr2 << "\n";

// yes it is the same
}