#include <iostream>
#include <string>

using namespace std;

class MyFirstClass {
    public:
        int num;
        string text;
};

int main() {
    MyFirstClass MyFirstObject;
    cin >> MyFirstObject.num;
    cout << "Variable 'num' is " << MyFirstObject.num << endl;
    // getline(cin, MyFirstObject.text); // GETLINE NÃO FUNCIONA
    cin >> MyFirstObject.text;
    cout << "Variable 'text' is " << MyFirstObject.text << endl;
    return 0;
}
