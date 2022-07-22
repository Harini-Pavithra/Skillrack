#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,r,c,m,n,k,l,s=0,a[100][100];
    scanf("%d %d", &r,&c);
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d ", &a[i][j]);
    scanf("%d %d ", &m, &n);
    for(i=0;i<r;i+=m)
        for(j=0;j<c;j+=n)
        {
            
            for(s=0,k=i;k<m+i;k++)
                for(l=j;l<n+j;l++)
                    s=s+a[k][l];
            printf("%d ",s);
        }

}
An integer matrix of size R*C is given as input. The program must print the sum of the elements of all sub-matrices of size M*N where R%M==0. and C%N==0 (The sub matrices do not overlap)

Boundary Condition(s):
1 <= R, C, M, N <= 100

Input Format:
The first line contains R and C separated by space(s).
The next R lines contain C integers each separated by space(s).
The last line contains M and N separated by space(s).

Output Format:
The first line contains the sum the elements of each sub-matrix separated by a space.

Example Input/Output 1:
Input:
4 4
1 2 3 4
5 12 3 24
8 7 3 56
1 2 13 81
2 2

Output:
20 34 18 153

Example Input/Output 2:
Input:
4 2
21 15 
11 74 
4 2 
58 96
1 2

Output:
36 85 6 154

