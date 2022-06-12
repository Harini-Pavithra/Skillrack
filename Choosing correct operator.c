#include<stdio.h>
#include <stdlib.h>

int main()
{
int a,b,c;
char op1,op2;
scanf("%d%c%d%c%d",&a,&op1,&b,&op2,&c);
if(a+b==c)
{
    printf("+");
}
else if(a-b==c)
{
    printf("-");
}
else if(a*b==c)
{
    printf("*");
}
else 
{
    printf("/");
}
}
input:
5-4=20
output:
*