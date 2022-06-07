#include<stdio.h>
#include<stdlib.h>
int main()
{
char s[100],c=' ';
int i,j;
while(c==' ')
{
scanf("%s%c",s,&c);
for(i=0;s[i]!='\0';i++)
{
if(i%2==0)
{
printf("%c",toupper(s[i]));
}
else
{
printf("%c",tolower(s[i]));
}
}
printf(" ");
}


Example Input/Output 1:
Input:
tREE GiVES us fruiTS

Output:
TrEe GiVeS Us FrUiTs

Example Input/Output 2:
Input:
FLoweR iS beauTIFUL

Output:
FlOwEr Is BeAuTiFuL