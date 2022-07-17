#include<stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j;
    scanf("%d",&n);
    char a[n][1010],temp[1010];
    int c[n],t;
    for(i=0;i<n;i++)
    {
        c[i]=0;
        scanf("%s",a[i]);
        int x[26]={0};
        for(j=0;j<strlen(a[i]);j++)
        x[a[i][j]-'a']++;
        for(j=0;j<26;j++)
        if(x[j]>0)
        c[i]++;
    }
    int f;
    for(i=0;i<n;i++)
    for(j=i+1;j<n;j++)
    {
        f=0;
        if(c[j]>c[i])
        f=1;
        else if(c[i]==c[j]&&strcmp(a[j],a[i])<0)
        
        f=1;
        if(f==1)
        {
            t=c[i];
            c[i]=c[j];
            c[j]=t;
            strcpy(temp,a[i]);
            strcpy(a[i],a[j]);
            strcpy(a[j],temp);
        }
    }
for(i=0;i<n;i++)
printf("%s\n",a[i]);

}
N string values are passed as input. 
The program must sort and print the strings based on the count of unique alphabets in them. 
If two strings have same unique alphabet count, then sort them based on lexicographical order. 
Sorting based on the count of unique characters must be done in descending order 
(that is the string having the highest unique character count must be printed first).
Example Input/Output 1:
Input:
3
bubble
telegram
munch

Output:
telegram
munch
bubble

Example Input/Output 2:
Input:
4
sit
miner
flood
temple

Output:
miner
temple
flood
sit