#include<stdio.h>
#include <stdlib.h>

int main()
{
char s[100],p;
scanf("%s",s);
int l=strlen(s)-1,i,j,flag=0;
for(i=0;i<l;i++)
{
    for(j=i+1;j<l;j++)
    {
        p=s[j];
        if((s[i]=='a'||s[i]=='e' || s[i]=='i' || s[i]=='o'||s[i]=='u')&& (s[j+1]=='a' || s[j+1]=='e'||s[j+1]=='i'||s[j+1]=='o'||s[j+1]=='u'))
        {
            printf("%c",p);
        }
        
    }
}
if(flag==0)
{
    printf("-1");
}
}