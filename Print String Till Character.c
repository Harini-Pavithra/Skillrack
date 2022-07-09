#include<stdio.h>
#include <stdlib.h>

int main()
{
char s[99],c,index;
int i;
 scanf("%s\n%c",s,&c);
for(i=0;s[i]!='\0';i++)
{
    if(s[i]==c)
    {
      break;
    }
    else
    {
         printf("%c",s[i]);
    }
 }
return 0;
}

Example Input/Output 1:
Input:
manager
e

Output:
manag

Example Input/Output 2:
Input:
Everest
e

Output:
Ev