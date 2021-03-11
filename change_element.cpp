#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int>numbers = {1,2,3,4,5,6,7,8,9,10};
    numbers[2] = 12;
    numbers[3] = 13;
    numbers[4] = 14;
    for(int i=0; i<numbers.size(); ++i) {
        cout << numbers[i] << " ";
    }
    return 0;
}