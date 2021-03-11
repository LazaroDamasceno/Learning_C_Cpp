#include <stdio.h>

int CountDigits(int num) {
    if(num<=9)
        return 1;
    return 1 + CountDigits(num/10);
}

int main() {
    int num;
    printf("Insert a number: ");
    scanf("%d", &num);
    printf("Count of digits in %d = %d", num, CountDigits(num));
    return 0;
}
