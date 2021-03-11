#include <stdio.h>
#include <math.h>

int main() {
    int a = 16;
    int *p = &a;
    printf("Sum: %d\n", *p+12);
    printf("Multiplication: %d\n", *p*12);
    printf("Division: %.2lf\n", *p/12.0);
    printf("Power: %.2lf\n", pow((double)a, 2.0));
    printf("Power: %.2lf\n", pow((double)a, 1/5));
    return 0;
}