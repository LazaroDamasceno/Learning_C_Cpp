#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    while(true)
    {
        char again;
        printf("Do you want an infinite loop? Y/N ");
        scanf("%c", &again);
        if(again == 'N' && again == 'n')
        {
            break;
        }
    }
}
