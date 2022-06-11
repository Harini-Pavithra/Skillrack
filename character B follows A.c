#include<stdio.h>
#include <stdlib.h>

int main()
{
char A,B,String[199];
scanf("%s\n%c\n%c",String,&A,&B);
int i,count=0;
for(i=0;String[i]!='\0';i++)
{
    if(String[i]==A)
    {
        if(String[i+1]==B)
        {
            count++;
        }
    }
}
printf("%d",count);
}

nput:
malayalam
a
l

Output:
2

Explanation:
The two occurrences where a is followed by l is as highlighted below. malayalam


Example 2:
Input:
engine
e
n

Output:
1