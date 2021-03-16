#include <stdio.h>

int main()
{
    int list[10] = {0,1,2,3,5,6,7,7,8,9};
    for(int i=0; i<10; ++i)
    {
        if(list[i] == 7 && list[i+1] == 7)
        {
            printf("%d", list[i]+list[i+1]);
        }
        else
        {
            break;
        }
    }
    return 0;
}
