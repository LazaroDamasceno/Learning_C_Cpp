#include <stdio.h>

int factorial(int num)
{
    if(num<=1)
    {
        return 1;
    }
    return num*factorial(num-1);
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d\n", factorial(num));
    return 0;
}
