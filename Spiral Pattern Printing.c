#include&lt;stdio.h&gt;
#include &lt;stdlib.h&gt;

int main()
{
int N,index,index1,row,col,i,j,k;
scanf(&quot;%d &quot;,&amp;N);
int array[N][N];
for(index=0;index&lt;N;index++)
{
for(index1=0;index1&lt;N;index1++)
{
scanf(&quot;%d &quot;,&amp;array[index][index1]);
}
}
//printSpiral(array[index][index1],N);
for(i=N-1, j=0; i&gt;0; i--, j++)
{
//print top row
for(k=j; k&lt;i; k++) printf(&quot;%d &quot;, array[j][k]);
//print last column
for(k=j; k&lt;i; k++) printf(&quot;%d &quot;, array[k][i]);
//print last row
for(k=i; k&gt;j; k--) printf(&quot;%d &quot;, array[i][k]);

//print first column
for(k=i; k&gt;j; k--) printf(&quot;%d &quot;, array[k][j]);

}
//if odd size matrix print the middle value
int middle = (N-1)/2;
if (N% 2 == 1) printf(&quot;%d&quot;, array[middle][middle]);
}
