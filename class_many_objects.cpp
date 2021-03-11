#include <iostream>

using namespace std;

class MyClass {
    public:
        int x;
        int y;
};

int main() {
    MyClass My1stObject;
    MyClass My2ndObject;
    cin >> My1stObject.x;
    cin >> My1stObject.y;
    cout << "My1stObject.x values: " <<
    My1stObject.x << endl;
    cout << "My1stObject.y values: " <<
    My1stObject.y << endl;
    cin >> My2ndObject.x;
    cin >> My2ndObject.y;
    cout << "My2ndObject.x values: " <<
    My2ndObject.x << endl;
    cout << "My2ndObject.y values: " <<
    My2ndObject.y << endl;
    return 0;
}
