#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n;
  int a[n],i,j,count=0;
  for(i=0;i<10;i++)
  {
    scanf("%d",&a[i);
  }
  for(i=0;i<10;i++)
                  {
                    for(j=i+1;j<10;j++)
                    {
                      if(a[i]!=a[j])
                      {
                        count++;
                      }
                    }
                  }
  printf("%d",count);
  return 0;
}
