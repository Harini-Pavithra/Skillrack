#include<stdio.h>
#include <stdlib.h>

int main()
{
char s[500];
scanf("%[^\n]",s);
int i;
for(i=0; s[i]!='\0'; i++)
	{
		if(i==0)
		{
			if((s[i]>='a' && s[i]<='z'))
				s[i]=toupper(s[i]);
			continue;
		}
		if(s[i]==' ')
		{
			if(s[i+1]>='a' && s[i+1]<='z')
			{
				s[i+1]=toupper(s[i+1]);
				continue;
			}
		}
	}
	printf("%s",s);
}

Example Input/Output 1:
Input:
She is        happy.

Output:
She Is Happy.

Example Input/Output 2:
Input:
joIN tHE ParTY

Output:
JoIN THE ParTY