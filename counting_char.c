#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int strlen(char *str) {
    int i=0, lenght=0;
    while(str[i] != '\0')
    {
        i++;
        lenght++;
    }

    return lenght;
}

int main() {
    int stringLenght;
    char testStr[SIZE];
    gets(testStr);
    stringLenght = strlen(testStr);
    printf("The length of string '%s' is %d\n", testStr, stringLenght);
    return 0;
}
