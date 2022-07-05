#include<stdio.h>
#include <stdlib.h>

int main()
{
int n;
    scanf("%d",&n);
    int i=1,j,count=0,k=n,m=n,val=1;
    for(i=0;i<n;i++)
    {
        count=0;
        k=n;
        for(j=val;count<m;j+=k+1)
        {
            printf("%d ",j);
            count++;
            k--;
        }
        printf("\n");
        val++;
        m--;
    }
}

Example Input/Output 1:
Input:
5

Output:
1 6 10 13 15
2 7 11 14
3 8 12
4 9
5

Example Input/Output 2:
Input:
3

Output:
1 4 6
2 5
3