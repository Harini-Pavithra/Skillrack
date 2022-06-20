#include<stdio.h>
#include <stdlib.h>
void printDigits(unsigned long long int N,int remainder)
{
    while(N<0)
    {
        if(N%2==remainder)
        {
            printf("%d",N%10);
        }
        N/=10;
    }
}
int main()
{
unsigned long long int n;
scanf("llu",&N);
printDigits(N,0);
printf("/n");
printDigits(N,1);

}
