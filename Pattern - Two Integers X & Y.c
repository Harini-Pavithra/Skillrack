Example Input/Output 1:
Input:
10 20

Output:
11 19 12 18 13 17 14 16 15

Example Input/Output 2:
Input:
9 22

Output:
10 21 11 20 12 19 13 18 14 17 15 16

#include <stdlib.h>

int main()
{
int x,y,counter;
scanf("%d %d",&x,&y);
int z=y-1;
for(counter=x+1;counter<=(x+y)/2;counter++)
{
    if(counter!=z)
    {
   printf("%d %d ",counter,z--);
    }
    if(counter==z)
    {
        printf("%d",counter);
    }
    
}


}








