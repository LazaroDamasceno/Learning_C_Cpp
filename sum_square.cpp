#include <iostream>
#include <vector>

using namespace std;

void SumSquare(int quantity)
{
    vector<int>numbers;
    for(int a=1; a<=quantity; ++a)
    {
        numbers.push_back(a);
    }
    for(int b=0; b<quantity; ++b)
    {
        for(int c=b+1; c<quantity; ++c)
        {
            for(int d=c+1; d<quantity; ++d)
            {
                if((numbers[b]*numbers[b] + numbers[c]*numbers[c]) == numbers[d]*numbers[d])
                {
                    cout << numbers[b] << "^2" << " + "
                    << numbers[c] << "^2" << " = " <<
                    numbers[b]*numbers[b] + numbers[c]*numbers[c]
                    << endl;
                }
            }
        }
    }
}

int main(void)
{
    SumSquare(100);
}
