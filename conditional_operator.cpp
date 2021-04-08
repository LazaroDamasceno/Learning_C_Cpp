#include <iostream>

using namespace std;

void F1()
{
    int score {92};
    cout << ((score > 90) ? "Excellent" : "Good") << endl;
}

void F2()
{
    int a={10}, b={20};
    cout << ((a>b) ? a-b : b-a) << endl;
}

void F3()
{
    int c (12);
    cout << ((c>=12) ? "c eh maior do 12" : "c eh menor do que doce" ) << endl;
}

int main(void)
{
    /* First */
    F1();
    /* Second */
    F2();
    /* Third */
    F3();
    /* Fouth */
    int c = (12);
    cout << ((c<=12) ? "c eh menor do 12" : "c eh maior do que doce" ) << endl;
}