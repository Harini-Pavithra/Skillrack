Given a positive integer value N as input, print the pattern as in the Example
Input/Output section. The outer edges must be represented by asterisk * and rest by
hash #inclu
Example Input/Output 1:
Input:
5
Output:
*****
*###*
*###*
*###*
*****
Example Input/Output 2:
Input:
6
Output:
******
*####*

*####*
*####*
*####*
******&lt;stdio.h&gt;
#CODinclude&lt;conio.h&gt;
#include&lt;stdio.h&gt;
#include&lt;conio.h&gt;
int main()
{
int i,j,n;
scanf(&quot;%d&quot;,&amp;n);
for(i=0;i&lt;n;i++)
{
for(j=0;j&lt;n;j++}
{
if(i==0||i==n-1||j==0||j==n-1)
printf(&quot;*&quot;);
else
printf(&quot;#&quot;);
}
printf(&quot;\n&quot;);
}
return 0;
