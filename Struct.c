#include&lt;stdio.h&gt;
#include &lt;stdlib.h&gt;
struct node
{
int expn[4][100];
char val;
};
int evalpower(int x, int y)
{
int result;
while(y-- &gt; 0)
{
result *=x;
}
return result;
}
int eval(char *ptr)
{
int argsread,value,curr,prevopr,curropr,offset,iteration=0;
while((argsread=sscanf(ptr,&quot;%d%c%n&quot;,&amp;curr,&amp;curropr,&amp;offset)&gt;0))
{
if(++iteration==1)
{
value=curr;
}else

{
if(prevopr==&#39;^&#39;)
{
value=evalpower(value,curr);

}
else if(prevopr==&#39;*&#39;)
{
value *=curr;
}else if(prevopr== &#39;+&#39;)
{
value +=curr;
}
}
prevopr=curropr;
if(argsread ==1 )
{
break;
}
ptr+=offset;
}
}

int main()
{

int n;
//char expn[4][100];
scanf(&quot;%d&quot;,&amp;n);
struct node expns[n];
for(int i=0;i&lt;n;i++)
{
scanf(&quot;%s&quot;,expns[i].expn);
expns[i].val=eval(expns[i].expn);

}
for(int i=0;i&lt;n;i++)
{
//for(int j=0;j&lt;n;j++)
//{
//if(expns[i].expn)
printf(&quot;%s\n&quot;,expns[i].expn);
// }
}
}
