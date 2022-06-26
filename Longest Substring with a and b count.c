A string S containing only the characters a and b is passed as the input. 
The program must print the length L of the longest substring with equal numbers of a and b in it.

Example Input/Output 1:
Input:
abaabba

Output:
6

Example Input/Output 2:
Input:
aaabaaabbbaaab

Output:
8
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
int max(int a,int b){return a>b?a:b;}
int lstring(int arr[],int len)
{
    int longest=-1,sum[len],i,min,max;
    sum[0]=((arr[0]==0)?-1:1);
    min=arr[0];max=arr[0];
    for(i=1;i<len;i++)
    {
        sum[i]=sum[i-1]+((arr[i]==0)?-1:1);
        if(sum[i]<min)
        min=sum[i];
        if(sum[i]>max)
        max=sum[i];
    }
    int h[max-min+1];
    for(i=0;i<max-min+1;i++)
    h[i]=-1;
    for(i=0;i<len;i++)
    {
        if(sum[i]==0)
        longest=i+1;
        if(h[sum[i]-min]==-1)
        h[sum[i]-min]=i;
        else
        {
            if((i-h[sum[i]-min])>longest)
            longest=i-h[sum[i]-min];
        }
    }
    if(longest==-1)
    return 0;
    else
    return longest;
}
int main()
{
    char str[100009];
    scanf("%s",str);
    int len=strlen(str),i,longest,arr[len];
    for(i=0;i<len;i++)
    {
        if(str[i]=='a')
        arr[i]=0;
        else
        arr[i]=1;
    }
    longest=lstring(arr,len);
    printf("%d",longest);
}
(or)

#include<stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    char str[10000000];
    scanf("%s",str);
    int sum[strlen(str)];
    if(str[0]=='a')sum[0]=1;
    else sum[0]=-1;
    for(i=1;i<strlen(str);i++){
        if(str[i]=='a')sum[i]=sum[i-1]+1;
        else sum[i]=sum[i-1]-1;
    }int s,max=0;
    for(i=0;i<strlen(str);i++){
        if(i==0)s=0;
        else s=sum[i-1];
        for(j=strlen(str)-1;max<j-i+1&&j>i;j--){
            if(sum[j]-s==0){
                if(max<j-i+1)max=j-i+1;
                break;
            }
        }
    }printf("%d",max);
    return 0;
}
