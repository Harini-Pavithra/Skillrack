Given an integer value N as input, print the pattern as shown in the Example Input/ Output Section.
Boundary Conditions:
1 &lt;= N &lt;= 150
Input/ Output Format:
Input:
The first line contains the value of N.
Output:
The N lines contain the desired pattern as shown in the Example Input/ Output Section.
Example Input/ Output:
Input:
5
Output:

1
2 1
3 2 1
4 3 2 1
5 4 3 2 1

Code:
#include&lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

int main()
{
int n,i,j;
scanf(&quot;%d&quot;,&amp;n);
for(i=0;i&lt;=n;i++)
{
for(j=i;j&gt;0;j--)
{
printf(&quot;%d &quot;,j);
}
printf(&quot;\n&quot;);
}

}
