#include<stdio.h>
#include <stdlib.h>

int main()
{
int N;
scanf("%d\n",&N);
int array[N],counter,counter1,temporary;
for(counter=1;counter<=N;counter++)
{
    scanf("%d\n",&array[counter]);
}
for(counter=1;counter<=N;counter++)
{
  for(counter1=counter+1;counter1<=N;counter1++) 
  {
      if(array[counter]<array[counter1])
      {
      temporary=array[counter1];
      array[counter1]=array[counter];
      array[counter]=temporary;
      }
  }
}
printf("%d ",array[2]);
}
Example Input/Output 1:
Input:
3
100
2200
345

Output:
345

Example Input/Output 2:
Input:
6
-23
-256
-87
-90
-11019
-2

Output:
-23