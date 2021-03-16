#include <iostream>

using namespace std;

int main() {
    int limit = 30;
    int result = 0;
    char counter[limit] = {'a', 'A', 'b', 'B', 'c', 'C', 'd', 'D'};
    for(int i=0; i<(limit-1); ++i)
        result += (int)counter[i];
    }
    cout << result << endl;
    return 0;
}
