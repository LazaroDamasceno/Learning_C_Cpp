#include <iostream>

using namespace std;

int CountDigits(int num) {
    if(num<=9)
        return 1;
    return 1 + CountDigits(num/10);
}

int main() {
    int num;
    cout << "Insert a number: ";
    cin >> num;
    cout << "Count of digits in " <<  num << " = " << CountDigits(num);
    return 0;
}
