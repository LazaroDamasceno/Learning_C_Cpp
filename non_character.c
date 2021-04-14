#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    char input[] = "João Damasceno";
    for(int i=0; i<=strlen(input); ++i)
    {
        if(input[i]=='\0')
        {
            break;
        }
        else
        {
            printf("%c\n", input[i]);
        }
    }
}
