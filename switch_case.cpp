#include <iostream>

using namespace std;

int main(void)
{
    int inputone = 13;
    int inputtwo = 13;
    switch(inputone)
    {
        case 11:
            cout << "The answer is correct" << endl;
            break;
        case 12:
            cout << "The answer is correct" << endl;
            break;
        case 13:
            cout << "The answer is correct" << endl;
            break;
        default:
            cout << "The answer is incorrect" << endl;
            break;
    }
        switch(inputtwo)
    {
        case 11:
        case 12:
        case 13:
            cout << "The answer is correct" << endl;
            break;
        case 14:
            cout << "The answer is partially correct" << endl;
            break;
        default:
            cout << "The answer is incorrect" << endl;
            break;
    }
}
