#include<stdio.h>
#include <stdlib.h>

int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    int a[m][n],i,j,k=0,b[n+m],temp;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i==0&&j==0)||(i==0&&j==n-1)||(i==m-1&&j==0)||(i==m-1&&j==n-1))
            {
                b[k]=a[i][j];
                k++;
            }
        }
    }
    for(i=0;i<k;i++)
    {
        for(j=i+1;j<k;j++)
        {
            if(b[i]>b[j])
            {
                temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    int l=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if((i==0&&j==0)||(i==0&&j==n-1))
            {
                a[i][j]=b[l];
                l++;
            }
            if((i==m-1&&j==0)||(i==m-1&&j==n-1))
            {
                a[i][j]=b[k-1];
                k--;
            }
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}



input:
3 3
9 2 7 
4 6 8
1 3 3

output:
1 2 3
4 6 8
7 3 9
