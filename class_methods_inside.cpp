#include <iostream>

using namespace std;

class MyClassOne {
    public:
        void return_one() {
            cout << "Hello World!\n";
        }
        void return_two() {
            cout << "Good-bye World!\n";
        }
        int return_three(int num) {
            return num+12;
        }
        double return_four(double num) {
            return num/2;
        }
};

int main() {
    MyClassOne MyObject;
    MyObject.return_one();
    MyObject.return_two();
    cout << MyObject.return_three(12) << endl;
    cout << MyObject.return_four(2) << endl;
    return 0;
}
