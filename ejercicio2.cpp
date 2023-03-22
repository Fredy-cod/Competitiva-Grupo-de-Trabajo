#include <iostream>
#include <stdio.h>
int main(void)
{
    int n;
    char format[6] = "%.1f";
    double pi = 3.14159265358979323;
    scanf("%d", &n);
    if (n > 9)
    {
        format[3] = (n-10) + '0';
        format[4] = 'f';
    }
    else
    {
        format[2] = n+'0';
    }
    printf(format, pi);
}