#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    vector<int>v{12,4,7,3,2,11,7,9,1,0,10};
    sort(v.begin(), v.end());
    for(int i=0; i<v.size(); ++i)
        cout << v[i] << " ";
    cout << endl;
}
