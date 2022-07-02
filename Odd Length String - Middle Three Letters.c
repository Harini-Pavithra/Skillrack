#include<stdio.h>
#include <stdlib.h>

int main()
{
char String[100];
fgets(String,100,stdin);
int i=0,count=0;
while(String[i]!='\0')
{
    count++;
    i++;
}
//printf("%d",count);
printf("%c%c%c",String[(count/2)-2],String[(count/2)-1],String[(count/2)]);
}

Example Input/Output 1:
Input:
level

Output:
eve

Example Input/Output 2:
Input:
manager

Output:
nag