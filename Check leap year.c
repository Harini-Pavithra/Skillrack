#include<stdio.h>
#include <stdlib.h>

int main()
{
int y;
scanf("%d",&y);
if((y%100!=0&&y%4==0) || y%400==0)
{
    printf("yes");
}
else
{
    printf("no");
}
}


A year Y will be passed as input. The program must find if the given year is a leap year or not.
- If it is leap year, the program must print yes else it should print no