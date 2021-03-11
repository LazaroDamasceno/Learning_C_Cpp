#include <iostream>

using namespace std;

class MyClassTwo {
    public:
        void return_one();
        void return_two();
        int return_three(int num);
        double return_four(double num);
};

void MyClassTwo::return_one() {
    cout << "Hello World!" << endl;
}

void MyClassTwo::return_two() {
    cout << "Good-bye World!" << endl;
}

int MyClassTwo::return_three(int num) {
    return num/12;
}

double MyClassTwo::return_four(double num) {
    return num/2;
}

int main() {
    MyClassTwo MyObject;
    MyObject.return_one();
    MyObject.return_two();
    cout << MyObject.return_three(24) << endl;
    cout << MyObject.return_four(2) << endl;
    return 0;
}
