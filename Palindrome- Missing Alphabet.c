#include<stdio.h>
#include <stdlib.h>

int main()
{
char s[99];
scanf("%s",s);
int l=strlen(s)-1,i;
for(i=0;i<l;i++)
{
    if(s[i]==s[l])
    {
        l--;
    }
    else
    {
        if(s[i+1]==s[l])
        {
          printf("%c",s[i]);
          break;
        }
        else
        {
            printf("%c",s[l]);
            break;
        }
        
    }
}
}

Example Input/Output 1:
Input:
malayaam

Output:
l

Example Input/Output 2:
Input:
abcddcb

Output:
a