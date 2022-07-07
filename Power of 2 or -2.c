Given an integer N, the program must determine if it is a power of 2 or -2. 
If N is a power of 2 or -2, the program must print yes. Else the program must print no.
Input Format:
The first line contains the value of N.

Output Format:
The first line contains either yes or no

Example Input/Output 1:
Input:
32

Output:
yes


Example Input/Output 2:
Input:
90

Output:
no
#include<stdio.h>
#include <stdlib.h>

int main()
{
long long int i,n;
scanf("%lld",&n);
for(i=0;i<200;i++){
    if(pow(2,i)==n||pow(-2,i)==n){
        printf("yes");
        exit(0);
    }
}
printf("no");
}

