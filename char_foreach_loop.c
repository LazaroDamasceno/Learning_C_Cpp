#include <stdio.h>

int main(void)
{
    /* First */
    char z[] = {'0','1','2','3','4','5','6',
    '7','8','9'};
    for(char x : z)
        printf("%c ", x);
    printf("\n");
    /* Second */
    char y[] = "0123456789";
    for(char x : y)
        printf("%c ", x);
    printf("\n");
    /* Third */
    char g[] = {'0','1','2','3','4','5','6',
    '7','8','9'};
    for(char x : g)
        printf("%d ", static_cast<int>(x));
    printf("\n");
    /* Fourth */
    char k[] = "0123456789";
    for(char x : k)
        printf("%d ", static_cast<int>(x));
    printf("\n");
}
