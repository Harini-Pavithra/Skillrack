Example Input/Output 1:
Input:
thinker

Output:
tie

Example Input/Output 2:
Input:
table

Output:
ae

#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
char a[100];
scanf("%s",&a);
int i;
for(i=0;i<strlen(a);i++)
{
    if(a[i-1]!='a'&&a[i-1]!='e'&&a[i-1]!='i'&&a[i-1]!='o'&&a[i-1]!='u'&&
	a[i+1]!='a'&&a[i+1]!='e'&&a[i+1]!='i'&&a[i+1]!='o'&&a[i+1]!='u'&&a[i-1]!='A'&&
	a[i-1]!='E'&&a[i-1]!='I'&&a[i-1]!='U'&&a[i-1]!='O'&&a[i+1]!='A'&&a[i+1]!='E'&&
	a[i+1]!='I'&&a[i+1]!='O'&&a[i+1]!='U')
    {
        printf("%c",a[i]);
    }
}
}
