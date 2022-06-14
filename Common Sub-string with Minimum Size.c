Two strings (S1 and S2) and an integer S are given as input. 
The program must print the count of common substrings which are of at least size S.

Example Input/Output 1:
Input:
management
engage
2

Output:
4

Explanation:
The common substrings of size at least 2 are ag, ge, age and en.

Example Input/Output 2:
Input:
telephone
phone
3

Output:
6

Explanation:
The #include<stdio.h>
#include <stdlib.h>

int main()
{
int x,k,l;
char str1[100],str2[100];
scanf("%s%s",str1,str2);
scanf("%d",&x);
int i,len1,len2,j,max=0,count=0;
len1=strlen(str1);
len2=strlen(str2);
for(i=0;i<len1;i++)
{
    
    for(j=0;j<len2;j++)
    {
        count=0;
    if(str1[i]==str2[j])
    {
        for(k=i,l=j;k<len1&&l<len2;k++,l++)
        {
        if(str1[k]==str2[l])
        {
            count++;
           
            
        if(count>=x)
        {
            max++;
        }
        }
        else
        {
            break;
        }
        }
    }
    else{
       
        continue;
    }
    }
}
printf("%d",max);
}common substrings of size at least 3 are pho, hon, one, phon, hone and phone.

also in sandy's bit bucket
