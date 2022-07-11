#include<stdio.h>
#include <stdlib.h>

int main()
{
char s[100],ch;
int i,j,c=0;
fgets(s,101,stdin);
int n=strlen(s);
for(i=n-1;i>=0;i--)
{
    for(j=i-1;j>=0;j--)
    {
        if(s[i]==s[j])
        {
            printf("%c",s[i]);
            c=1;
            break;
        }
    }
    if(c==1)
    {
        break;
    }
}
}


abcdefghijhbij
output:
j