Given two integers A and B as input, the program must find the sum of A and B 
then find the difference of A and B then find the product of A and B at last print the sum of all the result.
Example Input/Output 1:
Input:
5 4

Output:
30

Example Input/Output 2:
Input:
6 8

Output:
60
#include<stdio.h>
#include <stdlib.h>

int main()
{
unsigned long long int a,b,c,d,e;
scanf("%llu %llu",&a,&b);
c=a+b;
d=(a-b);
e=a*b;
printf("%d",c+d+e);
}