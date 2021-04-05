#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    /* First */
    string v = "0123456789";
    for(char x : v)
        cout << x << " ";
    cout << endl;
    /* Second */
    char y[] = "0123456789";
    for(char x : y)
        cout << x << " ";
    cout << endl;
      /* Third */
    char p[10] = {'0','1','2','3','4','5','6',
    '7','8','9'};
    for(char x : p)
        cout << x << " ";
    cout << endl;
}
