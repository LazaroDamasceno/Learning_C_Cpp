#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a = 16;
    int *p = &a;
    cout << "Sum: " << *p+12 << endl;
    cout << "Multiplication: " << *p*12 << endl;
    cout << "Division: " << *p/12.0 << endl;
    cout << "Power: " << pow((double)a,2.0) << endl;
    cout << "Power: " << pow((double)a,1/5) << endl;
    return 0;
}
