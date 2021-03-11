#include <iostream>

int main() {
    double v = 12.2;
    double *pv = &v;
    std::cout << sizeof(pv) << " represents the size of pointer itself" << "\n";
    std::cout << sizeof(*pv) << " represents thr size of number embbeded in the pointer" << "\n";
    return 0;
}
