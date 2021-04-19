#include <stdio.h>

typedef int i32;
typedef long long ll;
typedef char txt;

i32 main(void)
{
    ll id;
    txt text[12];
    scanf("%lld", &id);
    printf("%lld\n", id);
    scanf("%s", &text);
    printf("%s\n", text);
}
