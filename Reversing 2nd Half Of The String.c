#include<stdio.h>
#include <stdlib.h>

int main()
{
char s[100];
int i=0,l;
scanf("%s%n",s,&l);
//%n is used to extract the length of the string scanned
while(i<l/2)
{
    printf("%c ",s[i++]);
}
while(--l>=i)
{
    printf("%c ",s[l]);
}

}


