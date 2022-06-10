A date in DD-MM-YYYY format is passed as the input. The program must print the calendar month.
01 - January, 02 - February and so on till 12 - December.
#include<stdio.h>
#include <stdlib.h>

int main()
{
int DD,MM,YY;
scanf("%d-%d-%d",&DD,&MM,&YY);
char Months[12][10]={"January","Feburary","March","April","May","June",
"July","August","September","october","November","December"};
printf("%s",Months[MM-1]);
}
Example Input/Output 1:
Input:
23-12-2016

Output:
December