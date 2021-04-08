#include <iostream>

using namespace std;

int main(void)
{
    while(true)
    {
        char again {};
        cout << "Do you an infinite loop? Y/N" << endl;
        cin >> again;
        if(again == 'N' || again == 'n')
        {
            cout << "Message: You've loggout." << endl;
            break;
        }
    }
}
