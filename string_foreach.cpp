#include <iostream>

using namespace std;

int main(void)
{
    for(auto c : "This is a string")
    {
        cout << c;
    }
    cout << "\n";
    for(auto d : "This is a string")
    {
        if(d != ' ')
        {
            cout << d;
        }
    }
    cout << "\n";
    for(auto e : "This is a string")
    {
        if(e == ' ')
        {
            cout << "\t";
        }
        else
        {
            cout << e;
        }
    }
}
