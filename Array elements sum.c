Accept an array of N integer values as input, print the sum of all the other elements except the current
index value as shown in the Example Input/ Output Section.
Boundary Conditions:
1 &lt;= N &lt;= 100
Input/ Output Format:
Input:
The first line contains the value of N.
The second line contains the N values separated by a space.
Output:
The first line contains N elements&#39; sum of all the other elements except the current index value.
Example Input/ Output:
Input:
4
52 78 10 65
Output:
153 127 195 140
Explanation:
78+10+65 = 153
52+10+65 = 127
52+78+65 = 195
52+78+10 = 140

Code:
#include&lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

int main()
{
int n,i;
long int s=0;
scanf(&quot;%d&quot;,&amp;n);
int a[n];
for(i=0;i&lt;n;i++)
{
scanf(&quot;%d&quot;,&amp;a[i]);
s=s+a[i];
}
for(i=0;i&lt;n;i++)
{
printf(&quot;%d&quot;,s-a[i]);
}
}
