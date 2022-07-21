#include<stdio.h>
#include <stdlib.h>

int main()
{
 char c=' ',s[100][1000];
    int i=0,count=0,articleCount=0;
    while(c==' ')
    {
        scanf("%s%c",s[i],&c);
        count++;
        i++;
    }
    for(i=0;i<count;i++)
    {
        if(strlen(s[i])==1 || strlen(s[i])==2)
        {
            if(tolower(s[i][0])=='a' && (s[i][1]=='\0' || s[i][1]=='.' || s[i][1]==','))
            {
                articleCount++;
            }
        }
        if(strlen(s[i])==2 || strlen(s[i])==3)
        {
            if(tolower(s[i][0])=='a' && tolower(s[i][1])=='n' && (s[i][2]=='\0'|| s[i][2]==','|| s[i][2]=='.'))
            {
                articleCount++;
            }
        }
        if(strlen(s[i])==3 || strlen(s[i])==4)
        {
            if(tolower(s[i][0])=='t' && tolower(s[i][1])=='h' && tolower(s[i][2])=='e' && (s[i][3]=='\0' || s[i][3]==',' || s[i][3]=='.'))
            {
                articleCount++;
            }
        }
        
    }
    printf("%d",articleCount);
    }
Boundary Conditions:
The length of the string S will be from 3 to 1000.
Each word in S will not be more than 100 characters.

Example Input/Output 1:
Input:
I went to a movie yesterday along with an old man.

Output:
2

Example Input/Output 2:
Input:
In 1885 it was banished from the shelves of the Concord Public Library, 
an act that attracted a lot of publicity and discussion in the press. 
It is still frequently in the news, as various schools and school systems across 
the country either ban it from or restore it to their classrooms. 
The texts and illustrations below attempt to capture both the novel's 
achievement and some aspects of its controversiality.

Output:
8