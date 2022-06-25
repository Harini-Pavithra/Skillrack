#include<stdio.h>
#include <stdlib.h>

int main()
{
char s[50][100],a=' ';
int flag=0,count=0,i=0,l;
while(a==' ')
{
 scanf("%s %c",s[count],&a);
 count++;
}
for(i=0;i<count-1;i++)
{
    l=strlen(s[i]);
    if(s[i][n-1]==s[i+1][0])
    {
        printf("%s ",s[i+1]);
        flag=1;
    }
}
if(flag==0)
{
printf("-1");    
}
}