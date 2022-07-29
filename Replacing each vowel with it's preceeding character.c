#include&lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

int main()
{
char s[100];
scanf(&quot;%s&quot;,s);
int counter;
for(counter=0;s[counter]!=&#39;\0&#39;;counter++)
{
if(tolower(s[counter])==&#39;a&#39;||tolower( s[counter])==&#39;e&#39; || tolower(s[counter])==&#39;i&#39; ||
tolower(s[counter])==&#39;o&#39;|| tolower( s[counter])==&#39;u&#39;)
{
printf(&quot;%c&quot;,s[counter-1]);
}
else
{
printf(&quot;%c&quot;,s[counter]);
}
}

}
Example Input/Output 1:
Input:
telegram
Output:
ttllgrrm
Example Input/Output 2:
Input:

yck
Output:
yck
