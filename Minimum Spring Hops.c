#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,b=0,s=0,r=0;
    scanf("%d%d",&n,&m);
    int a[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==m&&(n-i)>m)
        s=i;
    }
    for(int i=s;i<n-1;)
    {
        r=a[i]%10;
        b++;
        i=i+r;
        if(i>n-1)
        {
            printf("-1");
            return 0;
        }
    }
        printf("%d",b);
}
Example Input/Output 1:
Input:
9 3
5 3 2 1 1 3 1 3 4

Output:
1

Explanation:
Starting value 3 occurs thrice. Traversing from 3 at 6th position will be minimal to reach the last spring (3->4).

Example Input/Output 2:
Input:
10 5
5 3 2 1 8 3 7 3 1 6

Output:
3

Explanation:
There is only one starting value 5. The number of hops needed is 3 (5->3->1->6).