#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    char a[n][100];
    char b[1000]="";
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    for(j=i-1;j>=0;j--)
    {
        strcat(b,a[j]);
    }
    printf("%s",b);
    return 0;
}
