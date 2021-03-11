#include <iostream>

using namespace std;

class MySecondClass {
    private:
        int x;
};

int main() {
    MySecondClass MySecondObject;
    cin >> MySecondObject.x;
    cout << MySecondObject.x << endl;
    return 0;
}
