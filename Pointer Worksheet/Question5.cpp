#include <iostream>

int main() {
    int vals[] = {1, 7, 6, 2, 8};
    int *ptr = (vals+2);
    *(ptr+1) = 17;
    *(vals+vals[0]) = 5;

    for(int a = 0; a < sizeof(vals); a = a + 1) {
        std::cout << vals[a] << "\n";
    }
    std::cout << *ptr << "\n";
}