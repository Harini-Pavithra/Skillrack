#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,in,l,r;
scanf("%d",&r);
int a[r][r];
for(i=0;i<r;i++)
{
    for(j=0;j<r;j++)
    {
        scanf("%d ",&a[i][j]);
    }
}
for(i=0;i<r;i++)
{
    in=a[i][0];
   for(j=0;j<r;j++)
   {
       if(a[i][j]>=in)
       {
           in=a[i][j];
       }
   }
   printf("%d ",in);
}
printf("\n");
for(j=0;j<r;j++)
#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,in,l,r;
scanf("%d",&r);
int a[r][r];
for(i=0;i<r;i++)
{
    for(j=0;j<r;j++)
    {
        scanf("%d ",&a[i][j]);
    }
}
for(i=0;i<r;i++)
{
    in=a[i][0];
   for(j=0;j<r;j++)
   {
       if(a[i][j]>=in)
       {
           in=a[i][j];
       }
   }
   printf("%d ",in);
}
printf("\n");
for(j=0;j<r;j++)
in=a[0][j];
    for(i=0;i<r;i++)
    {
        if(a[i][j]>=in)
        {
            in=a[i][j];
        }
    }
    printf("%d ",in);
}
}



Example Input/Output 1:
Input:
3
1 2 3
4 5 6
7 8 9

Output:
3 6 9 
7 8 9 

Example Input/Output 2:
Input:
4
3 5 8 9
5 2 4 8
5 1 3 4
0 1 2 3

Output:
9 8 5 3 
5 5 8 9