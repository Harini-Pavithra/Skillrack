#include<stdio.h>
#include <stdlib.h>

int main()
{
int first,second,third,N,diff;
scanf("%d%d%d",&first,&second,&third);
scanf("\n%d",&N);
diff=abs(second-third);
printf("%d",(first+(N-1)*diff));
}

example
input
1 5 10
6
output
30
note: 6th term of the series is 30