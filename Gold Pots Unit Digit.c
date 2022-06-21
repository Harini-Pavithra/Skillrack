#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,a[1000],i,u,sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
i=0; 
while(i<n)
{
    sum=sum+a[i];
    u=a[i]%10;
    i=i+u;
}
printf("%d",sum);
}

Example Input/Output 1:
Input:
7
452 231 871 943 25 762 823 

Output:
3089

Explanation:
Gold pots are collected in the following order 452, 871, 943 and 823.

Example Input/Output 2:
Input:
5
91 42 72 194  32

Output:
327

Explanation:
Gold pots are collected in the following order 91, 42 and 194.