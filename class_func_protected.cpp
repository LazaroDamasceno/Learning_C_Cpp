#include <iostream>

using namespace std;

class MyThirdClass {
    protected:
        int x;
};

int main() {
    MyThirdClass MyThirdObject;
    cin >> MyThirdObject.x;
    cout << "The protected variable is: " << MyThirdObject.x << endl;
    return 0;
}
+
