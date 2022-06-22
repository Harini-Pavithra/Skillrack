#include<stdio.h>
#include <stdlib.h>

int main()
{
int n;
scanf("%d",&n);
int a[n][n],i,j;
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        scanf("%d ",&a[i][j]);
    }
}
for(i=0;i<n;i++)
{
    printf("%d ",a[i][i]);
}
for(i=n-2;i>=0;i--)
{
    printf("%d ",a[i][n-1]);
}
for(i=1,j=n-2;i<n;i++,j--)
{
   printf("%d ",a[i][j]); 
}
for(i=n-2;i>=0;i--)
{
    printf("%d ",a[i][0]);
}
}




Input:
3 
1 2 3 
5 6 7
2 3 4

Output:
1 6 4 7 3 6 2 5 1

Example Input/Output 2:
Input:
4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16

Output:
1 6 11 16 12 8 4 7 10 13 9 5 1