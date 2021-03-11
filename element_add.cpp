#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int>numbers;
    int adder;
    cin >> adder;
    while(adder != 0) {
        numbers.push_back(adder);
        cin >> adder;
    }
    for(int i=0; i<=numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    return 0;
}

