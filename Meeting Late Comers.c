#include<stdio.h>
#include <stdlib.h>

int main()
{
int h,m,count=0;
char c='';
while(c!='\n')
{
  scanf("%d:%d%c",&h,&m,&c);
  if(h==10 && m>0)
count++;
if(h>10 && m>=00)
{
    count++;
}
}
printf("%d",count);

}

A certain number of people attended a meeting which was to begin at 10:00 am on a given day. 
The arrival time in HH:MM format of those who attended the meeting is passed as the input in a single line,
with each arrival time by a space. 
The program must print the count of people who came late (after 10:00 am) to the meeting.
Example Input/Output 1:
Input:
10:00 9:55 10:02 9:45 11:00

Output:
2

Explanation:
The 2 people were those who came at 10:02 and 11:00