#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<vector<int>>numbers = {
        {1,2,3},
        {5,6,7},
        {9,10,11},
        {13,14,15}
    };
    cout << numbers.at(0).at(0) << endl;
    cout << numbers.at(0).at(1) << endl;
    cout << numbers.at(0).at(2) << endl;
    cout << numbers.at(1).at(0) << endl;
    cout << numbers.at(1).at(1) << endl;
    cout << numbers.at(1).at(2) << endl;
    cout << numbers.at(2).at(0) << endl;
    cout << numbers.at(2).at(1) << endl;
    cout << numbers.at(2).at(2) << endl;
    cout << numbers.at(3).at(0) << endl;
    cout << numbers.at(3).at(1) << endl;
    cout << numbers.at(3).at(2) << endl;
}
