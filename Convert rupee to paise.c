#include<stdio.h>
#include <stdlib.h>

int main()
{
int amount,rupees,paise;
scanf("%d.%d",&amount,&paise);
rupees=amount*100+paise;
printf("%d",rupees);
}
Example Input/Output 1:
Input:
11.30

Output:
1130

Example Input/Output 2:
Input:
0.80

Output:
80

Example Input/Output 3:
Input:
0.0

Output:
0