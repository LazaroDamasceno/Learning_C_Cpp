#include <iostream>

using namespace std;

int main(void)
{
    int scores[] {10,20,30};
    for(auto score : scores)
    {
        cout << score << endl;
    }
}