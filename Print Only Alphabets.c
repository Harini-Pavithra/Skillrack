#include<stdio.h>
#include <stdlib.h>

int main()
{
char s[1001];
fgets(s,1001,stdin);
int index=0;
while(s[index]!='\0' && s[index]!='\r'&& s[index]!='\n')
{
  if((s[index]>='a'&& s[index]<='z') || (s[index]>='A'&& s[index]<='Z'))
  {
      printf("%c",s[index]);
  }
  index++;
}
}
Example Input/Output 1:
Input:
abcd_5ef8!xyz

Output:
abcdefxyz

Example Input/Output 2:
Input:
1239_-87

Output:

Explanation:
As there are no alphabets in the input value nothing is printed as output.