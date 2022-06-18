#include<stdio.h>
#include <stdlib.h>
int main()
{
int n;
scanf("%d\n",&n);
int a[n];

for(i=1;i<=n;i++)
{
   scanf("%d ",&a[i]); 
}
for(i=1;i<=n;i++)
{
    printf("%d ",(2*(a[i]%10)));
}
}
Example Input/Output 1:
Input:
5
23 44 65 32 78

Output:
6 8 10 4 16

Example Input/Output 2:
Input:
8
684 71 342 55 166 734 211 545

Output:
8 2 4 10 12 8 2 10