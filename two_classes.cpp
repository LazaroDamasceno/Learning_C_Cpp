#include <iostream>
#include <string>
#include <locale.h>

using namespace std;

class Adress
{
    private:
        string street;
        string neiborhood;
        long number;
        long zipcode;
    public:
        void MyAdress(string street,
                      string neiborhood,
                      long number,
                      long zipcode)
        {
            setlocale(LC_ALL, "Portuguese");
            cout << street << endl;
            cout << neiborhood << endl;
            cout << number << endl;
            cout << zipcode << endl;

        }
};

class Data
{
    private:
        string firstname;
        string lastname;
        int age;
        long socialid;
    public:
        void MyData(string firstname,
                    string lastname,
                    int age,
                    long long socialid)
        {
            setlocale(LC_ALL, "Portuguese");
            cout << firstname << endl;
            cout << lastname << endl;
            cout << age << endl;
            cout << socialid << endl;
        }
};

int main()
{
    Adress object1;
    object1.MyAdress("Rua Professor Antônio Nesi",
                    "Nova Descoberta",
                    227,
                    59056490);
    Data object2;
    object2.MyData("Lázaro",
                   "Damasceno",
                   24,
                   11122244488);
    return 0;
}
