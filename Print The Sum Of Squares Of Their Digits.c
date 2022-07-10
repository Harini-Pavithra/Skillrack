#include<stdio.h>
#include <stdlib.h>

int main()
{
unsigned long long int n,a,c=0;
scanf("%llu",&n);
while(n>0)
{
    a=n%10;
    c=c+(a*a);
    n=n/10;
    
}
printf("%d",c);
}
Example Input/Output 1:
Input:
123

Output:
14

Example Input/Output 2:
Input:
34567

Output:
135