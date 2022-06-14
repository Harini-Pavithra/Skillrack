#include<stdio.h>
#include <stdlib.h>

int main()
{
char string1[99],string2[99],string3[99],first,ch;
scanf("%s\n%s",string1,string2);
int length1=strlen(string1),length2=strlen(string2),index,i,j=0;
for(i=0;i<length1;i++)
{
    if((string1[i]==string2[0]) &&(string1[i+1]==string2[1])&&(string1[i+2]==string2[2]))
        index=i;
    if(string1[i]==string2[j])
    {
        j++;
        if(i==length1-1)
        break;
    }
        else
            j=0;
}
printf("%s",&string1[index]);
}


Example Input/Output 1:
Input:
mayday
daybreak

Output:
day

Example Input/Output 2:
Input:
bridge
gear

Output:
ge