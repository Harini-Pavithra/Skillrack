#include<stdio.h>
#include <stdlib.h>

int main()
{
int N,D,a,i,c;
scanf("%d %d\n",&N,&D);
c=D-1;
a=N-D;
printf("%d ",a);
for(i=1;i<D;i++)
{
    a=a-c;
    printf("%d ",a);
    c--;
}
}

or


#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,i,d;
    scanf("%d %d",&a,&b);
    d=a;
    for(i=0;i<b;i++)
{
    d=d-(b-i);
    printf("%d ",d);
}

}
Example Input/Output 1:
Input:
20 5

Output:
15 11 8 6 5

Example Input/Output 2:
Input:
12 6

Output:
6 1 -3 -6 -8 -9