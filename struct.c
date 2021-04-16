#include <stdio.h>

struct Date
{
    short day;
    short month;
    int year;
};

int main(void)
{
    struct Date Time;
    scanf("%hd %hd %d", &Time.day, &Time.month, &Time.year);
    printf("The date is: %hd/%hd/%d.", Time.day, Time.month, Time.year);
}