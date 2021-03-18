#include <stdio.h>

int SumOfDigits(int num)
{
    if(num<=9)
    {
        return num;
    }
    return num%10 + SumOfDigits(num/10);
}

int main()
{
    int num;
    scanf("%d", &num);
    printf("%d", SumOfDigits(num));
    return 0;
}

