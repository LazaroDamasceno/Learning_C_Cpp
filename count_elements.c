#include <stdio.h>

int main() {
    int list[] = {1,2,3,1,2,3,1,1,3,1,2,1,3,2,2,1,1,1};
    int counter=0;
    for(int g=0; g<12; ++g)
        if(list[0]==list[g])
            counter++;
        else
            continue;
    printf("%d", counter);
    return 0;
}
