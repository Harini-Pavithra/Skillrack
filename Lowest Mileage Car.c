#include<stdio.h>
#include <stdlib.h>

int main()
{
char c=" ",s[50],n[50];
float f;
int l=10000;
while(c!='\n')
{
    scanf("%[^@]@%f%c",s,&f,&c);
    if(f<=l)
    {
        l=f;
        strcpy(n,s);
    }
}
printf("%s",n);
}

Example Input/Output 1:
Input:
Zantro@16.15 Zity@12.5 Gamry@9.8

Output:
Gamry