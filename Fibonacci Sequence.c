#include<stdio.h>
#include <stdlib.h>

int main()
{
long int N,counter,a=0,b=1,result=0;
scanf("%ld",&N);
for(counter=0;counter<N;counter++)
{
    printf("%ld ",a);
    result=a+b;
    a=b;
    b=result;
}

}
Example Input/Output 1:
Input:
5

Output:
0 1 1 2 3

Example Input/Output 2:
Input:
10

Output:
0 1 1 2 3 5 8 13 21 34