#include <iostream>
#include <iomanip>

using namespace std;

int main(void)
{
    double scores[] {10.000000,20.000000,30.000000};
    cout << fixed << setprecision(1);
    for(auto score : scores)
    {
        cout << score << endl;
    }
}
