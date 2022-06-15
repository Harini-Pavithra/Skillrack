
#include<stdio.h>
#include <stdlib.h>

int main()
{
char s1[99],s2[99];
scanf("%s\n%s",s1,s2);
int count=0,i,j;
for(i=1;s1[i]!='\0';i++)
{
    for(j=1;s2[j]!='\0';j++)
    {
        if(s1[i]==s2[j])
        {
            count++;
            s1[i]='*';
            s2[j]='*';
            break;
        }
    }
}
printf("%d",count);
}
Example 1:
Input:
china
india

Output:
3

Explanation:
The common characters are i,n,a


Example 2:
Input:
energy
every

Output:
3

Explanation:
The common characters are e,r,y