#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL,"pt-br");
    char name[300];
    gets(name);
    puts(name);
    return 0;
}