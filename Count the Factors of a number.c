#include<stdio.h>
#include<conio.h>
void main()
{
int index,number,count=0;
scanf("%d",&number);
for(index=1;index<=number;index++)
{
if(number%index==0)
{
count++;
}
}
printf("%d",count);
}

output:
input:
100
output:
9

input
6
output:
4