#include<stdio.h>
#include <stdlib.h>

int main()
{
int alenamount,timamount,alenwidth,timwidth;
scanf("%d %d\n",&alenamount,&timamount);
scanf("%d %d",&alenwidth,&timwidth);
int length1,length2;
float total;
length1=((alenamount/5)/alenwidth);
length2=((timamount/5)/timwidth);
total=length2-length1;
printf("%.2f",fabs(total));
}


input
10000 4000
100 200
 output:
 10000/5=ans/100=ans1
 4000/5=ans/200=ans2
 output=ans1-ans2