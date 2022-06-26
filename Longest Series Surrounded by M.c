An array of N integers and an integer M are passed as input. 
The program must print the longest series of integers surrounded by M on its both ends. 
The series must not contain the integer M. 
If more than one longest such series are found print the last occurring series.
Example Input/Output 1:
Input:
7 2
45 2 21 534 2 45 2

Output:
21 534

Example Input/Output 2:
Input:
10 23
23 76 23 129 34 12 23 45 67 23

Output:
129 34 12

#include<stdio.h>
#include <stdlib.h>

int main()
{
int N,M;
scanf("%d %d\n",&N,&M);
int array[N],counter,count=0,array1[N],counter1=0,first,last;
for(counter=1;counter<=N;counter++)
{
    scanf("%d\t",&array[counter]);
}
for(counter=1;counter<=N;counter++)
{
    if(array[counter]==M)
    {
     array1[counter1]=counter;
     counter1++;
}
}
for(counter=counter1-1;counter>0;counter--)
{
    if(array1[counter]-array1[counter-1]>count)
    {
        count=array1[counter]-array1[counter-1];
            first=array1[counter-1];
            last=array1[counter];
    }
}
for(counter=first+1;counter<last;counter++)
{
    printf("%d ",array[counter]);
}
}