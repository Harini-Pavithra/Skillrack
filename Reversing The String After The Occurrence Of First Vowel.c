#include<stdio.h>
#include <stdlib.h>
int isVowel(char c)
{
    c=toupper(c);
    return(c=='A'|| c=='E'||c=='I'||c=='O'||c=='U');
}
int main()
{
char str[1001];
int length;
scanf("%s%n",str,&length);
int index=0;
do{
    printf("%c",str[index]);
    index++;
    
}while(str[index]!='\0' &&  !isVowel(str[index-1]));
length--;
while(length>=index)
{
    printf("%c",str[length]);
    lenght--;
}
return 0;
}

