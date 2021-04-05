#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    /* First vector */
    vector<int>v{1,2,3,4,5,6,7,8,9,10,
    11,12,13,14,15,16,17,18,19,20,21,
    22,23,24,25,26,27,28,29,30};
    for(int x : v)
        if(x%2==0)
            cout << x << " ";
    cout << endl;
    /* Second vector */
    vector<int>p{1,2,3,4,5,6,7,8,9,10,
    11,12,13,14,15,16,17,18,19,20,21,
    22,23,24,25,26,27,28,29,30};
    for(int x : p)
        if(x%2!=0)
            cout << x << " ";
    cout << endl;
}
