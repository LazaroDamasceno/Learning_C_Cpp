#include <iostream>

int main() {
    int a = 12;
    int *b = &a;
    std::cout << *b << "\n";
    std::cout << b << "\n";
    std::cout << (int)b << "\n";
    return 0;
}
