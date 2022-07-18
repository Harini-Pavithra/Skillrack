#include<stdio.h>
#include <stdlib.h>

int main()
{
int N,counter,counter1,sum=0;
scanf("%d",&N);
int array[N][N];
for(counter=1;counter<=N;counter++)
{
    for(counter1=1;counter1<=N;counter1++)
    {
    scanf("%d",&array[counter][counter1]);
    }
}
for(counter=1;counter<=N;counter++)
{
for(counter1=1;counter1<=N;counter1++)
{
    if((counter==1 &&counter1==1 )||(counter==1&&counter1==N)||(counter==N &&counter1==1) || (counter==N &&counter1==N))
    {
        sum=sum+array[counter][counter1];
    }
}
}
printf("%d",sum);

Input:
3
10 90 1
4  22 5
32 8 66

Output:
109

Explanation:
The sum = 10+1+66+32 =  109