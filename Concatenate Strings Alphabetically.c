#include<stdio.h>
#include <stdlib.h>

int main()
{
char String1[99],String2[99],first,second;
scanf("%s\n%s",String1,String2);
first=String1[0];
second=String2[0];
if(first<second)
{
  printf("%s%s",String1,String2);  
}
else
{
    printf("%s%s",String2,String1);
}
}


Example Input/Output 1:
Input:
apple
orange

Output:
appleorange

Example Input/Output 2:
Input:
zoo
tiger

Output:
tigerzoo

