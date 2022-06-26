A series of N integers is passed as input. 
The program must print the least occurring digit(s) in series of integers in ascending order.
Example Input/Output 1:
Input:
35 81 78 84 53

Output:
1 4 7

Example Input/Output 2:
Input:
12 21 68 55 71 29 60 879

Output:
0
#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a[10]={0,1,2,3,4,5,6,7,8,9},count[10],i=0,j,d;
    long int n;
    int flag=0,pos=0;
    for(i=0;i<10;i++)
    count[i]=0;
    while(scanf("%ld ",&n)>0)
    {
        while(n!=0)
        {
            d=n%10;
            for(i=0;i<10;i++)
            {
                if(d==a[i])
                {
                    count[i]++;
                    break;
                }
            }
            n/=10;
        }
    }
    for(i=0;i<10;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(count[i]>count[j])
            {
                d=a[i];
                a[i]=a[j];
                a[j]=d;
                d=count[i];
                count[i]=count[j];
                count[j]=d;
            }
        }
        if(count[i]!=0 && flag==0)
        {
            pos=i;
            flag=1;
        }
        if(count[i]==count[pos] && flag==1)
        printf("%d ",a[i]);
    }
}

Input:
319026 9562421219901 60366 3454768

Output:
7 8

(or)
#include<stdio.h>
#include <stdlib.h>

int main()
{
 long long int a[1000],size=0,count[10]={0},min=1000;
while(scanf("%lld",&a[size])==1)
{
   long long int x=a[size];
    while(x>0)
    {
        int y=x%10;
        count[y]++;
        x/=10;
    }
    size++;
}
for(int i=0;i<10;i++)
{
    if(count[i]<min&&count[i]!=0)
    min=count[i];
}
for(int i=0;i<10;i++)
if(count[i]==min)
printf("%d ",i);
}

(0r)
#include<stdio.h>
#include <stdlib.h>

int main()
{
char a[10000];
int b[10],i,j,s=1000;
scanf("%[^\n]s",a);
for(i=0;i<10;i++)
b[i]=0;
for(i=0;i<strlen(a);i++)
{
    b[a[i]-48]++;
}
for(i=0;i<10;i++)
{
    if(b[i]<s && b[i]>0)
    s=b[i];
}
for(i=0;i<10;i++)
{
    if(b[i]==s)
    printf("%d ",i);
}
}
(or)
#include<stdio.h>
#include <stdlib.h>

int main()
{
int count[11]={0};
long a;
int min=1000;
while(scanf("%ld ",&a)>0)
{
    while(a!=0)
    {
    ++count[a%10];
    a=a/10;
    }
}
for(int i=0;i<11;i++)
{
    if(min>count[i]&&count[i]>0)
        min=count[i];
}

for(int i=0;i<11;i++)
{
    if(count[i]==min)
        printf("%d ",i);

}
}

