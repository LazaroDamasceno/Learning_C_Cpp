#include <iostream>

using namespace std;

class MyClass {
    private:
        int x;
    public:
        int y;
    protected:
        int z;
};

int main() {
    MyClass MyObject;
    int x;
    cin >> MyObject.x;
    cout << MyObject.x << endl;
    int y;
    cin >> MyObject.y;
    cout << MyObject.y << endl;
    int z;
    cin >> MyObject.z;
    cout << MyObject.z << endl;
    return 0;
}
