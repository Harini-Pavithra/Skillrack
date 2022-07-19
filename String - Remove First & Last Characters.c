#include<stdio.h>
#include <stdlib.h>

int main()
{
char s[199];
int counter,length;
scanf("%s\n",s);
length=strlen(s)-1;
for(counter=1;s[counter]!='\0';counter++)
{
    if(counter!=1 && counter!=length)
    {
       printf("%c",s[counter]); 
    }
}
}


Example Input/Output 1:
Input:
Lion

Output:
io

Example Input/Output 2:
Input:
jug

Output:
u