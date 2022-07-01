#include<stdio.h>
#include <stdlib.h>

int main()
{
int X,Y;
scanf("%d\n%d",&X,&Y);
for(counter=X+1;counter<Y;counter++)
{
    if(counter%2!=0)
    {
        printf("%d ",counter);
    }
}
}


Example Input/Output 1:
Input:
1
11

Output:
3 5 7 9

Example Input/Output 2:
Input:
24
30

Output:
25 27 29