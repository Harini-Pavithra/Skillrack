#include<stdio.h>
#include <stdlib.h>

int main()
{
int N;
scanf("%d",&N);
if(N<0)
{
    printf("%d",abs(N));
}
else if(N==0)
{
    printf("%d",N);
}
else
{
   printf("-%d",N); 
}
}
Example Input/Output 1:
Input:
125

Output:
-125

Example Input/Output 2:
Input:
-346

Output:
346

Example Input/Output 3:
Input:
0

Output:
0