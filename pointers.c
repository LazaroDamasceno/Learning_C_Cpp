#include <stdio.h>

int main() {
    int a = 12;
    int *b = &a;
    printf("%d\n", *b);
    printf("%p\n", b);
    printf("%d\n", b);
    return 0;
}
