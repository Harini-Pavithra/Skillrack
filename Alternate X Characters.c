#include<stdio.h>
#include <stdlib.h>

int main()
{
    char a[1000];
    int n,i,c=0;
    fgets(a,1000,stdin);
    scanf("%d",&n);
    for(i=0;i<strlen(a);i++)
    {
        printf("%c",a[i]);
        c++;
        if(c==n)
        {
            i+=n;
            c=0;
        }
    }
    }
    input:
    helloworld
    3
    output:
    helorl
    
    input:
    environmentalpollution
    5
    output:
    envirtalpoon
