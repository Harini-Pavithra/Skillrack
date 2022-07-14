#include<stdio.h>
#include <stdlib.h>

int main()
{
char a[100],b[100];
scanf("%[^\n]",a);
int c=0,j=0,n,i;
n=strlen(a);
for(i=0;i<n;i++)
{
    if(a[i]!='_')
    {
        b[j]=a[i];
        c++;
        j++;
    }
    else
    {
        break;
    }
}
for(i=c-1;i>=0;i--)
{
    printf("%c",b[i]);
}
for(i=c;i<n;i++)
{
    printf("%c",a[i]);
}
}

Input:
abcd_pqrs

Output:
dcba_pqrs

Example Input/Output 2:
Input:
_kilo

Output:
_kilo

Example Input/Output 3:
Input:
nounderscore

Output:
erocsrednuon