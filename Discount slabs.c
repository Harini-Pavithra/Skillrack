#include<stdio.h>
#include <stdlib.h>
float x;
int main()
{
 int n;
 float a[100],b[100];
 scanf("%d %f",&n,&x);
 for(int i=0;i<n;i++)
 {
     scanf("%f",&a[i]);
 }
 for(int i=0;i<n;i++)
 {
     scanf("%f",&b[i]);
 }
 for(int i=0;i<n;i++)
 {
     if(x<a[i])
     {
       break;
     }
    if(x>=a[i]&&x<=a[i+1])
    {
        x=x-((x*b[i])/100.0);
        break;
    }
    if(x>a[n-1])
    {
      x=x-((x*b[n-1])/100.0);
    }
 }    
 printf("%.2f",x);
}

A shop has taken a discount based on the price of the purchase.There are N slabs
When the price falls between two slabs that is ith slab amount and 
(i+1)th slab amount then the discount for the ith slab is applied.
Given the price of purchase print the discounted amount to pay with 
precision up to two decimal places.

input:
4 400
500 1000 1500 2000
10 20 30 40

output:
400.00
NOTE:
No discount is applied as it falls below the lowest slab.

input:
4 3400
1000 2000 3000 4000
12 16 18 24

output:
2788.00

NOTE:
18% discount is applied since the price is between 3000 and 4000 slabs.