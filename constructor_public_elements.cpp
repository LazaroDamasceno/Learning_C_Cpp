#include <iostream>
#include <string>

using namespace std;

class MyClassOne
{
    public:
        MyClassOne()
        {
            cout << "Hello, World!" << endl;
        }
};

class MyClassTwo
{
    public:
        string first_name;
        string last_name;
        short age;
        long id_card;
        MyClassTwo(string fname, string lname, short a, long id)
        {
            first_name = fname;
            last_name = lname;
            age = a;
            id_card = id;
            cout << first_name << " | " << last_name << " | " << age << " | " << id_card << endl;
        }
};

int main(void)
{
    MyClassOne obj1;
    MyClassTwo obj2("Leonardo", "Damasceno", 24, 543543);
}
