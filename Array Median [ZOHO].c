#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,i,sum=0,b=10000,in;
float l,d;
scanf("%d",&n);
int a[n];
for(i=0;i<n;i++)
{
   scanf("%d ",&a[i]); 
   sum=sum+a[i];
}
l=sum/n;
for(i=0;i<n;i++)
{
    d=abs(a[i]-l);
    if(d<=b)
    {
        b=d;
        in=i;
    }
}
printf("%d",a[in]);
}





Input:
5
12 34 45 56 67

Output:
45

Explanation:
Sum of the given N integers = 214
Average = 42.8
The nearest integer to 42.8 in the given array is 45.
Hence 45 is the output.



Input:
3
10 11 12

Output:
11

Explanation:
Sum of the given N integers = 33
Average = 11
The nearest integer to 11 in the given array is 11.
Hence 11 is the output.