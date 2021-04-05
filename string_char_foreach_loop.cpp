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
