#include <iostream>

using namespace std;

int show_prime(int input) {
    for (int i=1; i<input; ++i)
        if (input%i==0)
            cout << i << endl;
}

int qtt_prime(int input) {
    int dividers=0;
    for (int i=1; i<input; ++i)
        if (input%i==0)
            dividers++;
    return dividers+1;
}


int main() {
    int num_one;
    cin >> num_one;
    cout << show_prime(num_one) << endl;
    int num_two;
    cin >> num_two;
    cout << qtt_prime(num_two) << endl;
    return 0;
}
