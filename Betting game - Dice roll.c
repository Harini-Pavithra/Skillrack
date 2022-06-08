#include<stdio.h>
#include <stdlib.h>

int main()
{
int i=0,count=0,a[99],i,x,y,t=0;
char c=' ';
while(c==' ')
{
    scanf("%d%c",&o[i],&c);
    i++;
    count++;
}
scanf("%d\n%d",&x,&y);
for(i=0;i<count;i++)
{
 if(o[i]%2==0)
 {
     t-=y; 
     }
else
 {
     t+=x; 
     
 }
}
printf("%d",t);
}
Example 1:
Input:
1 4 3
10
30

Output:
-10

Explanation:
He gains 20 rupees for 1 and 3 and loses 30 rupees for 4. Hence there is a net loss of 20-30 = -10


Example 2:
Input:
4 6 1 2 1
50
25

Output:
25

He gains 100 rupees for 1,1 and loses 75 rupees for 4,6,2. Hence there is a net gain of 100-75 = 25

