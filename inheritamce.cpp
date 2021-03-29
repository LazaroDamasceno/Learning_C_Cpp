#include <iostream>
#include <string>

using namespace std;

class F1
{
    protected:
        string first_name;
        string last_name;
        int age;
};

class F2 : public F1
{
    public:
        void F(string fname, string lname, int uage)
        {
            first_name = fname;
            last_name = lname;
            age = uage;
            cout <<  first_name << endl;
            cout << last_name << endl;
            cout << age << endl;
        }
    };

int main(void)
{
    F2 Object;
    Object.F("Lazaro", "Laz", 22);
}
