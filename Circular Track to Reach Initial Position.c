A circular track has N positions numbered from 1 to N. 
The initial position I of the player and an integer M are given as the input. 
The player jumps M positions per move. 
The program must print the minimum number of moves required to reach the initial position again.
Input:
10 2 5

Output:
2

Explanation:
2->7->2

Example Input/Output 2:

Input:
70 15 12

Output:
35

#include<stdio.h>
#include <stdlib.h>
int main()
{
    int n,i,m,c=1,a;
    scanf("%d %d %d", &n, &i, &m);
    a=(i+m-1)%n+1;
    while(a!=i)
    {
        a=(a+m-1)%n+1;
        c++;
    }
    printf("%d",c);
}