#include <stdio.h>

int main(void)
{
    /* First */
    char a[] = {1,2,3,4,5,6,7,8,9,10};
    for(int x : a)
        printf("%d ", x);
    printf("\n");
    /* Second */
    char b[] = {1,2,3,4,5,6,7,8,9,10};
    for(int x : b)
        if(x%2==0)
            printf("%d ", x);
    printf("\n");
}
