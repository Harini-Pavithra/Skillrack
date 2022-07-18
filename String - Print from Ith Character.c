#include<stdio.h>
#include <stdlib.h>

int main()
{
char s[100];
int k;
scanf("%s\n%d ",s,&k);
int l=strlen(s),i=0;
for(i=0;i<l;i++)
{
   if(i>=k-1)
   {
      printf("%c",s[i]); 
   }
  
}
}



Example Input/Output 1:
Input:
manager
3

Output:
nager

Example Input/Output 2:
Input:
environment
7

Output:
nment

