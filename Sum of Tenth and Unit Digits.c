#include<stdio.h>
#include <stdlib.h>

int main()
{
int N,a,b;
scanf("%d\n",&N);
a=N%10;
b=((N%100)/10);
printf("%d",a+b);
}

Example Input/Output 1:
Input:
231

Output:
4

Example Input/Output 2:
Input:
100

Output:
0

Example Input/Output 3:
Input:
192

Output:
11