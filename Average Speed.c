#include<stdio.h>
#include <stdlib.h>

int main()
{
int distance,time1;
float sum=0,sum1=0;
while((scanf("%d@%d",&distance,&time1))>0)
{
    sum=sum+distance;
    sum1=sum1+time1;
}
printf("%.2f kmph",(sum/sum1));


}

Input:
60@2 120@3

Output:
36.00 kmph

Explanation:
Total distance = 60+120 = 180 km.
Total time taken = 2+3 = 5 hours.
Hence average speed = 180/5 = 36.00 kmph


