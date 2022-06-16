#include<stdio.h>
#include <stdlib.h>

int main()
{
int Number1,Number2,flag=0;
scanf("%d\n%d",&Number1,&Number2);
int counter,counter1,count=0;
for(counter=Number1;counter<=Number2;counter++)
{
    flag=0;
    if(c==1)
    {
        flag=1;
    }
    for(counter1=2;counter1<=(counter/2);counter1++)
    {
        if(counter%counter1==0)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        count++;
    }
    //flag=0;
}
printf("%d",count);
}
Example 1:
Input:
6142
6200

Output:
6

Explanation:
The prime numbers within the range 6142 to 6200 are 6143, 6151, 6163, 6173, 6197, 6199


Example 2:
Input:
38
70

Output:
7

Explanation:
The prime numbers within the range 38 to 70 are 41, 43, 47, 53, 59, 61, 67

 