#include<stdio.h>
int main()
{
char s[999];
scanf("%s",s);
int counter;
for(counter=0;s[counter]!='\0';counter++)
{
if(s[counter]!=s[counter+1])
{
printf("%c",s[counter]);
}
}
}
Example Input/Output 1:
Input:
hello

Output:
helo

Example Input/Output 2:
Input:
aabbaaabbcccc

Output:
ababc