#include<stdio.h>
#include <stdlib.h>
int main() 
{
char s[100],temp;
int l,j=0,t=0;
scanf("%s",s);
scanf("%d",&l);
while(t!=l)
{
    for(int i=0;i<strlen(s);i++)
    {
        temp=s[i];
        s[i]=s[j];
        s[j]=temp;
    }
    t++;
}
printf("%s",s);
}

Input:
cricket
2

Output:
etcrick

Example Input/Output 2:
Input:
truth
5

Output:
truth