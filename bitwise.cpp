#include <iostream>

using namespace std;

int main(void)
{
    int a=10, b=11, c=12, d=13;
    cout << (a&d) << " " << (b&d) << " " << (c&d) << endl;
    cout << (a|d) << " " << (b|d) << " " << (c|d) << endl;
    cout << (a^d) << " " << (b^d) << " " << (c^d) << endl;
    cout << (~(a&d)) << " " << (~(b&d)) << " " << (~(c&d)) << endl;
    cout << (~(a|d)) << " " << (~(b|d)) << " " << (~(c|d)) << endl;
    cout << (~(a^d)) << " " << (~(b^d)) << " " << (~(c^d)) << endl;
}
