#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,n1,n2,i;
scanf("%d",&n);
for(i=0;i<=n-2;i=i+2)
{
    scanf("%d %d",&n1,&n2);
    printf("%d  %d ",n2,n1);
    
}
if(n%2==1)
{
    scanf("%d",&n1);
    printf("%d ",n1);
}
}
