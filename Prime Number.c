#include<stdio.h>
#include <stdlib.h>

int main()
{
int n, i, flag = 0;
scanf("%d",&n);
for(i=2;i<n/2;i++)
{
    if(n%i==0)
    {
        flag=1;
        break;
    }
}
if(flag==1)
{
    printf("NO");
}
else
{
    printf("YES");
}
}
Example Input/Output 1:
Input:
19

Output:
YES

Example Input/Output 2:
Input:
189210

Output:
NO