#include <stdio.h>

int main() {
    int answer, response, n=21;

    int arr[21] = {821,718,823,9,192,109,203,
    102,65,12,901,54,89,456,123,321,
    234,911,23,2,45};

    //CHECKING BY THE FIRTST
    for(int i=0; i<n; ++i) {
        if(arr[0] < arr[i]) {
            answer = arr[i];
        }
    }

    //CHECKING BY THE LAST
    for(int i=0; i<n; ++i) {
        if(arr[n-1] < arr[i]) {
            response = arr[i];
        }
    }
    printf("answer = %d and response = %d", answer, response);

    return 0;
}
