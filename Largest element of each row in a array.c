#include<stdio.h>
#include<conio.h>
int main()
{
int r,c,i,j,input;
scanf("%d\n%d",&r,&c);
int a[r][c];
for(i=0;i<r;i++)
{
input=a[i][0]
for(j=0;j<c;j++)
{
if(a[i][j]>=input)
{
input=a[i][j];
}
}
printf("%d\n",input);
}
}