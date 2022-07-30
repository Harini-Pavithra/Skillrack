INPUT:
INDIA
REDMI
OUTPUT:
IMDER
N
D
I
A
PROGRAM:
#include&lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
int main()
{
char s1[99],s2[99];
scanf(&quot;%s \n %s&quot;,s1,s2);
int a=strlen(s1);
int b=strlen(s2);
int i,j=1;
for(i=0;i&lt;a;i++)
{
printf(&quot;%c&quot;,s1[i] );
if(s1[i]==s2[b-1]&amp;&amp;j)
{
for(int k=b-2;k&gt;=0;k--)
{
printf(&quot;%c&quot;,s2[k]);
}
j=0;
}
printf(&quot;\n&quot;);
printf(&quot;hu8tpnhj&quot;);
}
}
