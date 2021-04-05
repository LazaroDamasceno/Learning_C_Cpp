#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    /* First vector */
    vector<int>v{12,4,7,3,2,11,7,9,1,0,10};
    sort(v.begin(), v.end());
    reverse(v.begin(), v.end());
    for(int x : v)
        cout << x << " ";
    cout << endl;
    /* Second vector */
    vector<int>g{8,3,7,2,9,11,3,12};
    reverse(g.begin(), g.end());
    for(int x : g)
        cout << x << " ";
    cout << endl;
}
