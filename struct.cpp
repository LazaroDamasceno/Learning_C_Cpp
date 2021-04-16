#include <iostream>

using namespace std;

struct Date
{
    short day;
    short month;
    int year;
};

int main(void)
{
    struct Date Time;
    cin >> Time.day >> Time.month >> Time.year;
    cout << "The date is: " << Time.day << "/" << Time.month << "/" << Time.year;
}