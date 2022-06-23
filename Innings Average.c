#include<stdio.h>
#include <stdlib.h>

int main()
{
int N,i,first,second,j=0,k=0;
scanf("%d",&N);
int a[N],b[N];
float sum=0,sum1=0;
for(i=1;i<=N;i++)
{
    scanf("%d\t%d\n",&first,&second);
    a[j]=first;
    b[k]=second;
    j++;
    k++;
}
for(i=0;i<j;i++)
{
    sum=(sum+a[i]);
}
printf("%.2f\n",(sum/N));
for(i=0;i<k;i++)
{
   sum1=(sum1+b[i]); 
}
printf("%.2f",(sum1/N));
}
Input:
3
250 200
450 300
200 250

Output:
300.00
250.00