#include <iostream>

using namespace std;

int SumOfDigits(int num)
{
    if(num<=9)
    {
        return num;
    }
    return num%10 + SumOfDigits(num/10);
}

int main()
{
    int num;
    cin >> num;
    cout << SumOfDigits(num) << endl;
    return 0;
}
