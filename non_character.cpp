#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main(void)
{
    
    setlocale(LC_ALL, "Portuguese");
    string name {"João Damasceno"};
    for(int i=0; i<name.size(); ++i)
    {
        if(name[i]=='\0')
        {
            break;
        }
        else
        {
            cout << name[i] << "";
        }
    }
}