#include&lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

int main()
{
int n,index,comboctr,count=0,sum=0,elemcount=0,copyindex=0;
scanf(&quot;%d&quot;,&amp;n);
int arr[n],triparr[n];
for(index=0;index&lt;n;index++)
{
scanf(&quot;%d&quot;,&amp;arr[index]);
}

for(comboctr=1;comboctr &lt; (1 &lt;&lt; n);comboctr++)//for the combination counter (2 power n)-1.
{
for(index=0;index &lt;n;index++)//comparing with our string positon in order to perform the bitwise
operation.
{
if(comboctr &amp; (1 &lt;&lt; index))//comparing combo and index ctr,
{
//printf(&quot;%c&quot;,str[index]);
elemcount++;
sum+=arr[index];
triparr[copyindex++]=arr[index];
}
}

if(sum==0)
{
printf(&quot;\n&quot;);
for(index=0;index&lt;elemcount;index++)
{
printf(&quot;%d&quot;,triparr[index]);
}
}
}

//printf(&quot;%d&quot;,count);

}
