#include <iostream>

using namespace std;

int main() {
    int var = 12;
    int *pvar = &var;
    int **nvar = &pvar;
    int ***gvar = &nvar;
    int ****kvar = &gvar;
    cout << pvar << endl;
    cout << nvar << endl;
    cout << gvar << endl;
    cout << kvar << endl;
    return 0;
}
