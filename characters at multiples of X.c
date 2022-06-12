#include<stdio.h>
#include <stdlib.h>

int main()
{
int X,counter;
char string[101];
fgets(string,101,stdin);
scanf("%d",&X);
for(counter=0;counter<=strlen(string)-1;counter++)
{
    if((counter+1)%X==0)
    {
        printf("%c",string[counter]);
    }
}

}

abcdefgh
2
output:
bdfh