Given two strings S1 and S2, the program must print the pattern as shown in the Example Input/Output
section.
Note:
The string S1 always comes in the first row.
The string S2 is printed along the last matching column of S1.
Boundary Condition(s):
1 &lt;= Length of S1, S2 &lt;= 100
Input Format:
The first line contains S1.
The second line contains S2.
Output Format:
The pattern is printed as shown in the Example Input/Output section.
Example Input/Output 1:
Input:
trophy
panther
Output:
trophy
---a--
---n--
---t--
---h--
---e--
---r--
Example Input/Output 2:
Input:

morning
ninja
Output:
morning
-----i-
-----n-
-----j-
-----a-
  
Code:
#include&lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

int main()
{
char s1[101],s2[101];
scanf(&quot;%s %s&quot;,s1,s2);
int i,l1=strlen(s1),l2=strlen(s2),r,c,p;
printf(&quot;%s\n&quot;,s1);
//GOING FROM LAST SINCE LAST OCCURING CHARACTER FROM FROWARD=FIRST OCURRING
CHARACTER IN BACKWARD
for(i=l1-1;i&gt;=0;i--)
{
if(s2[0]==s1[i])
{
p=i;
break;
}
}

for(r=1;r&lt;=l2-1;r++)
{
for(c=0;c&lt;=l1-1;c++)
{

if(c!=p)
{
printf(&quot;-&quot;);
}
else
{
printf(&quot;%c&quot;,s2[r]);
}
}
printf(&quot;\n&quot;);
}
}
