#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    char sentence[30];
    int countWords=0;
    int i;
    printf("Enter a string: ");
    gets(sentence);
    for(i=0; i<strlen(sentence); i++) // strlen() belong to string.h and calculates the length of a given string.
    {
        if(sentence[i] == ' ')
        {
            countWords++;
        }
    }
    countWords++;
    printf("Total amount of words in **%s** = %d\n", sentence, countWords);
    return 0;
}
