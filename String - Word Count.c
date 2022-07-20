#include<stdio.h>
#include <stdlib.h>

int main()
{
char string[500];
scanf("%[^\n]",string);
int counter,count=0;
for(counter=0;string[counter]!='\0';counter++)
{
       if(string[counter]==' ')
        count++;
    }
printf("%d",count+1);
}
Example Input/Output 1:
Input:
She went to movie yesterday.

Output:
5

Example Input/Output 2:
Input:
He has recovered.

Output:
3