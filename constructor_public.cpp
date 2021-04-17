#include <iostream>
#include <string>

using namespace std;

class MyClass
{
    public:
        Constructor1()
        {
            cout << "Hello, World!";
        }
    public:
        string first_name;
        string last_name;
        short age;
        long id_card;
        Constructor2(string fname, string lname, short a, long id)
        {
            first_name = fname;
            last_name = lname;
            age = a;
            id_card = id;
            cout << first_name << " " << last_name << " " << age << " " << id_card << endl;
        }
};

int main(void)
{
    MyClass object;
    object.Constructor1();
    object.Constructor2("Leonardo", "Damasceno", 22, 543543);
}