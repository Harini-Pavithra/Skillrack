
#include<stdio.h>
#include <stdlib.h>

int main()
{
int N;
scanf("%d",&N);
int counter1,counter;
for(counter=1;counter<=N;counter++)
{
    for(counter1=1;counter1<=counter;counter1++)
    {
        prinf("* ");
    }
    prinf("\n");
}

}

Example Input/Output 1:
Input:
5

Output:
*
* *
* * *
* * * *
* * * * *

Example Input/Output 2:
Input:
3

Output:
*
* *
* * *