#include<stdio.h>
#include <stdlib.h>

int main()
{
int i,j,r,c,input;
scanf("%d %d",&r,&c);
for(i=0;i<r;i++)
{
    for(j=0;j<c;j++)
    {
        scanf("%d",&input);
        if(i==0 || j==0 || i==r-1 || j==c-1)
        {
            printf("%d ",input);
        }
        else
        {
            printf(" - ");
        }
    }
    printf("\n");
}

}