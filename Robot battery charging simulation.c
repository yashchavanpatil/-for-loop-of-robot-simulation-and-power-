#include<stdio.h>

void main()
{
    int battery;

    clrscr();

    printf("Robot Battery Charging\n");

    for(battery = 0; battery <= 100; battery = battery + 20)
    {
        printf("Battery Level = %d%%\n", battery);
    }

    printf("Battery Fully Charged!");

    getch();
}