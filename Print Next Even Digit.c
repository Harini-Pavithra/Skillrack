#include<stdio.h>
#include <stdlib.h>

int main()
{
int n;
scanf("%d",&n);
int d[99999];
int i=0,j=0;
if(n==0)
{
    printf("2");
}
while(n!=0)
{
   d[i]=n%10; 
   n=n/10;
   i++;
}
for(j=i-1;j>=0;j--)
{
    switch(d[j])
    {
     case 0 ... 1 :
     printf("2");
     break;
     case 2 ... 3 :
     printf("4");
     break;
     case 4 ... 5 :
     printf("6");
     break;
     case 6 ... 7 :
     printf("8");
     break;
     case 8 ... 9 :
     printf("0");
     break;
    }
}
}