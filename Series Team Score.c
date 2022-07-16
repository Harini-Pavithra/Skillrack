#include<stdio.h>
#include <stdlib.h>

int main()
{
int A[99],B[99],counter=0,teamA=0,teamB=0,i;
char c=' ';
while(c==' ')
{
    scanf("%d%c",&A[counter],&c);
    counter++;
}
c='';
counter=0;
while(c==' ')
{
    scanf("%d%c",&B[counter],&c);
    counter++;
}
for(i=0;i<counter;i++)
{
    if(A[i]==B[i])
    {
        teamA+=1;
        teamB+=1;
    }
   else if(A[i]>B[i])
    {
        teamA+=3;
    }
    else
    {
        teamB+=3;
        }
}
printf("%d %d",teamA,teamB);
}

Example Input/Output 1:
Input:
3 5 1
3 2 0

Output:
7 1

Explanation:
Team A drew the first match and hence both team A and B got one point each.
Team A won both matches two and three and hence got additional 6 points.
So the final score of team A is 7 and team B is 1.