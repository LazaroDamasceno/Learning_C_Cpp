#include <iostream>
#include <string>

using namespace std;

class C1
{
    protected:
        string realname;
        string username;
        int userage;
};

class C2 : C1
{
    public:
        void F1(string rname, string uname, int uage)
        {
            realname = rname;
            username = uname;
            userage = uage;
            cout << "The real name is: " << realname << endl;
            cout << "The username is: " << username << endl;
            cout << "The userage is: " << userage << endl;
        }
};

int main(void)
{
    C2 Object;
    Object.F1("João Damasceno", "JD", 32);
}