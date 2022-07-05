#include<stdio.h>
#include <stdlib.h>

int main()
{
int N,counter,counter1;
scanf("%d",&N);
for(counter=1;counter<=N;counter++)
{
    for(counter1=1;counter1<=counter;counter1++)
    {
        printf("%d ",counter1);
    }
    printf("\n");
}
}


Example Input/Output 1:
Input:
5

Output:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

Example Input/Output 2:
Input:
3

Output:
1
1 2
1 2 3


