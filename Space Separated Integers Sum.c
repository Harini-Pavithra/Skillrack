#include<stdio.h>
#include <stdlib.h>

int main()
{
int a[9999],i,sum=0;
for(i=0;i<9999;i++)
{
scanf("%d\t",&a[i]);
sum=sum+a[i];
}
printf("%d",sum);
}

Example Input/Output 1:
Input:
100 -99 98 5

Output:
104

Example Input/Output 2:
Input:
100 200 -300 500 -450 -50

Output:
0