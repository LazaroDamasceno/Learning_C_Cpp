#include <stdio.h>

int main(void)
{
    int a=10, b=11, c=12, d=13;
    printf("%d %d %d\n", (a&d),(b&d),(c&d));
    printf("%d %d %d\n", (a|d),(b|d),(c|d));
    printf("%d %d %d\n", (a^d),(b^d),(c^d));
    printf("%d %d %d\n", (~(a&d)),(~(b&d)),(~(c&d)));
    printf("%d %d %d\n", (~(a|d)),(~(b|d)),(~(c|d)));
    printf("%d %d %d\n",(~(a^d)),(~(b^d)),(~(c^d)));
}
