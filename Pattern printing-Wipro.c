#include<stdio.h>
#include<stdio.h>
void printPattern(int N)
{
int counter,counter1,number=0,value=0;
for(counter=1;counter<=N;counter++)
{
    value=(counter&1) ? (number+1) :(number+counter)
    for(counter1=1;counter1<=counter;counter1++)
    {
        printf("%d ",value);
        if(counter%2==0)
        {
            value--;
        }
        else{
            value++;
        }
        number++;
    }
    printf("\n");
}
}
int main()
{
int N;
scanf("%d",&N);
printpattern(N);
}

Input

Input N: 5
Output

1
3  2
4  5  6
10 9  8  7
11 12 13 14 15