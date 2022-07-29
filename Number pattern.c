input:
1234
Ouput:
(1*4)+(2*3)=10

#include&lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

int main()
{
int n,m[1000],r,i,j=0,s=0;
scanf(&quot;%d&quot;,&amp;n);
while(n&gt;0)
{
m[j]=n%10;
n=n/10;
s++;
j++;
}
int k=s/2,a=s-1;
for(i=0;i&lt;k;i++)
{
r+=m[a]*m[i];
a--;
}
if(s%2!=0)
{
r=r+m[k];
}
printf(&quot;%d&quot;,r);

}
