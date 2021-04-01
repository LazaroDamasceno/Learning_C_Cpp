#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    vector<int>numbers = {1,2,3,4,5,6,7,8,9,10};
    cout << numbers.front() << endl;
    cout << numbers.back() << endl;
    for(int i=0; i<numbers.size(); ++i)
    {
        cout << numbers.at(i) << " ";
    }
}
