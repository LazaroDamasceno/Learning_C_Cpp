#include <iostream>
#include <string>

using namespace std;

class MyClass {
    private:
        string name;
    public:
        void print_string(string uname) {
            name = uname;
            cout << name << endl;
        }
};

int main() {
    MyClass MyObject;
    MyObject.print_string("John");
}
