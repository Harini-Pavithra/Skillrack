#include <stdio.h>

int main()
{
    int n,p;
    scanf("%d",&n);
    char s[n][1000];
    for(int i=0;i<n;i++)
    {
        scanf("%s",s[i]);
        p=strlen(s[i]-1);
        if((s[i][0]=='1' || s[i][0]=='3' || s[i][0]=='5' || s[i][0]=='7' || s[i][0]=='9')&& (s[i][p]=='1' || s[i][p]=='3' || s[i][p]=='5' || s[i][p]=='7' || s[i][p]=='9'))
        printf("%s ",s[i]);
    }


return 0;
}