#include <iostream>

int main() {
    const char *words[] = {"bee", "dog", "mouse"};
    short word[] = {1, 2, 1, 2, 0};
    short pos[] = {2, 1, 1, 3, 1};
    char secret[6];
    for (int i = 0; i < 5; ++i) {
    // obviously you should never do the following
    // for real, this is a comprehension question
    secret[i] = *(*(words + *(word+i)) + *(pos+i));
    }
    secret[5] = '\0'; // null terminator

    for(int a = 0; a < sizeof(secret); a = a + 1) {
        std::cout << secret[a] << "\n";
        //prints goose
    }
}