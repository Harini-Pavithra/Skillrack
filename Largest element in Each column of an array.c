#include<stdio.h>
#include <stdlib.h>

int main()
{
int r,c,i,j,input;
scanf("%d\t%d",&r,&c);
int a[r][c];
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d ",&a[i][j]);
}
}
for(j=0;j<c;j++)
{
input=a[0][j];
for(i=0;i<r;i++)
{
if(a[i][j]>=input)
{
input=a[i][j];
}
}
printf("%d ",input);
}
}
