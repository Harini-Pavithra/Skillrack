#include<stdio.h>
#include <stdlib.h>

int main()
{
int headcount,legcount;
scanf("%d\n%d",&headcount,&legcount);
printf("%d\n",abs((legcount-(4*headcount))/2));
printf("%d\n",abs(legcount-((2*headcount))/2));
}

Sample Input/Output:

Example 1:
Input:
27
84

Output:
12 15

Explanation:
There are 12 birds and 15 animals.

Example 2:
Input:
114
256

Output:
100 14

Explanation:
There are 100 birds and 14 animals.