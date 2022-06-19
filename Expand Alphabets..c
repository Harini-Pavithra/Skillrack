#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,i;
 unsigned char c;
while((scanf("%d%c",&n,&c))>0)
     {
         for(i=0;i<n;i++)
         {
         printf("%c",c);
         }
    }

}
Example Input/Output 1:
Input:
4a5h

Output:
aaaahhhhh

Explanation:
As it is 4a and 5h, four a's are printed followed by 5 h's

Example Input/Output 2:
Input:
1k2b4k

Output:
kbbkkkk