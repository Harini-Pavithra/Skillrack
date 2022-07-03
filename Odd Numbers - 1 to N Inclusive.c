#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,i;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    if(i%2!=0)
    {
        printf("%d ",i);
    }
}

}



Example Input/Output 1:
Input:
15

Output:
1 3 5 7 9 11 13 15

Example Input/Output 2:
Input:
8

Output:
1 3 5 7