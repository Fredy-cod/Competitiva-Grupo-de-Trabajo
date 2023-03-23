#include <iostream>
#include <string>
#include <ctime>

int dayofweek(int d, int m, int y);
int days(int d, int m, int y);

int main(void)
{
    int d, m, y;
    std::time_t t = std::time(0);
    std::tm* now = std::localtime(&t);

    std::string dext[7] = {"Domingo", "Lunes", "Martes", "Miercoles", "Jueves", "Viernes", "Sabado"};
    scanf("%d %d %d", &d, &m, &y);

    std::cout << "Han pasado " <<days(now->tm_mday, now->tm_mon+1, now->tm_year+1900) - days(d, m, y) << " dias." << std::endl;
    std::cout << "Fue un " << dext[dayofweek(d, m, y)] << ".";
}

int dayofweek(int d, int m, int y)
{
    //0-6 domingo-sabado
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
}

int days(int d, int m, int y)
{
    static int months[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};

    int leapyears = (m > 2) ? (y/4) - (y/100) + (y/400) : ((y-1)/4) - ((y-1)/100) + ((y-1)/400);
    return (((y-1)*365)+months[m-1]+d+leapyears);
}