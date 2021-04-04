#include <stdio.h>

int main(void)
{
    int inputone = 13;
    int inputtwo = 13;
    switch(inputone)
    {
        case 11:
            printf("The answer is correct\n");
            break;
        case 12:
            printf("The answer is correct\n");
            break;
        case 13:
            printf("The answer is correct\n");
            break;
        default:
            printf("The answer is incorrect\n");
            break;
    }
        switch(inputtwo)
    {
        case 11:
        case 12:
        case 13:
            printf("The answer is correct\n");
            break;
        case 14:
            printf("The answer is partially correct\n");
            break;
        default:
            printf("The answer is incorrect\n");
            break;
    }
}
