#include <stdio.h>

int SumArray(int *prt, int size)
{
    int i, sum=0;
    for(i=0; i<size; i++)
    {
        sum = sum + prt[i];
    }
    return sum;
}

int main()
{
    int grades[3] = {3,5,7};
    int result;
    result = SumArray(grades, 3);
    printf("Sum = %d\n", result);
    return 0;
}
