#include<stdio.h>
#include <stdlib.h>

int main()
{
int N,i,lenght=0;
scanf("%d\n",&N);
char names[99],des[99];
int total[N],mark1,mark2,mark3;
for(i=0;i<N;i++)
{
  scanf("%[^:]:%d:%d:%d\n",names,&mark1,&mark2,&mark3);
  total[i]=mark3+mark2+mark1;
  if(total[i]>=lenght)
  {
      lenght=total[i];
      strcpy(des,names);
  }
    
}
printf("%s",des);
}

Input:
4
Sasikumar:50:60:70
Arun:60:40:90
Manoj:50:50:60
Rekha:60:35:45

Output:
Arun


