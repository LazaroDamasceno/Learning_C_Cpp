#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main() {
    setlocale(LC_ALL, "pt-br");
    string name;
    getline(cin, name);
    cout << name << "\n";
    return 0;
}
