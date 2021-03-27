#include <iostream>

using namespace std;

int main(void)
{
    bool a = 10 > 12;
    bool b= 10 >= 12;
    bool c = 10 < 12;
    bool d = 10 <= 12;
    bool e = 10==12;
    bool aa = !(a);
    bool bb = !(b);
    bool cc = !(c);
    bool dd = !(d);
    bool ee = !(e);
    cout << a << " " << aa << endl;
    cout << b << " " << bb << endl;
    cout << c << " " << cc << endl;
    cout << d << " " << dd << endl;
    cout << e << " " << ee << endl;
}