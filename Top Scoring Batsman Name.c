#include<stdio.h>
#include <stdlib.h>

int main()
{
int N,i,score,j=0;
char names[99],topscore[99];
scanf("%d\n",N);
for(i=0;i<N;i++)
{
  scanf("%[^,],%d",names,&score);
  if(score>=j)
  {
      j=score;
  strcpy(topscore,names);
  }
}
printf("%s",topscore);
}


Example Input/Output 1:
Input:
5
BatsmanA,45
BatsmanB,52
BatsmanC,12
BatsmanD,9
BatsmanE,78

Output:
BatsmanE