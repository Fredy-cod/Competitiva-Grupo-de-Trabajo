#include <iostream>
#include <algorithm>
#include <ctime>

typedef struct reg
{
    int month;
    int day;
    int year;
}reg;

bool comp(reg regi1, reg regi2);
static int months[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

reg mapping[200000];

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &mapping[i].month, &mapping[i].day, &mapping[i].year);
        std::cout << mapping[i].day << std::endl;
    }
    std::sort(mapping, mapping+n, comp);
    for (int i = 0; i < n; i++)
    {
        std::cout << mapping[i].month << " " << mapping[i].day << " " << mapping[i].year << '\n';
    }
}

bool comp(reg regi1, reg regi2)
{
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);
    return (regi1.day+months[regi1.month-1]+now->tm_year+1900-regi1.year) < (regi2.day+months[regi2.month-1]+now->tm_year+1900-regi2.year);
}
