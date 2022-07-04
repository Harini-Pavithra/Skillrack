#include<stdio.h>
#include <stdlib.h>

int main()
{
int N,val=1;
scanf("%d",&N);
int counter,counter1;
for(counter=1;counter<=N;counter++)
{
    for(counter1=1;counter1<=counter;counter1++)
    {
        printf("%d ",val);
        val++;
    }
    printf("\n");
}
}
Example Input/Output 1:
7

Output:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21
22 23 24 25 26 27 28


Example Input/Output 2:
Input:
5

Output:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15