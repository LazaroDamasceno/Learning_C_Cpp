#include <iostream>
#include <string>

using namespace std;

class MyClass {
    protected:
        string name = "JOAO DA SILVA BARBOSA";
    public:
        void print_string() {
            cout << name << "\n";
        }
};

int main() {
    MyClass MyObject;
    MyObject.print_string();
    return 0;
}
