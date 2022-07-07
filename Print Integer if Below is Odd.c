Input:
3 3
2 6 72
4 3 1
1 6 9

Output:
* 6 72
4 * 1
* * *

Example Input/Output 2:
Input:
2 3
3 4 5
6 7 8

Output:
* 4 *
* * *

#include<stdio.h>
#include <stdlib.h>

int main()
{
int R,C;
scanf("%d %d",&R,&C);
int array[R][C],row,col;
for(row=1;row<=R;row++)
{
   for(col=1;col<=C;col++)
   {
       scanf("%d ",&array[row][col]);
   }
}
for(row=1;row<=R;row++)
{
    for(col=1;col<=C;col++) 
    {
            if(array[row+1][col]%2==0 || row==R){
                printf("* ");
            }
            else
            {
                printf("%d ",array[row][col]);
            }
    }
    printf("\n");
}
}
