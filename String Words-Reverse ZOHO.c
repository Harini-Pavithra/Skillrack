#include<stdio.h>
#include<conio.h>
void main()
{
char string[10][99],s=' ';
int index=0;
while(s==' ')
{
scanf("%s%c",string[index],s);
index++;
}
while(index-1>=0)
{
printf("%s%c,string[index-1],s);
index--;
}
input:
Today is Friday

output:
Friday is Today