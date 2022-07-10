The hierarchy of a family is given as the input. 
The first N lines contain the family hierarchy with each line containing 
the parent and the child names separated by a space. 
Each person in the family inherits the property only from his parent. 
(The value of the property of a parent is divided equally among his children).
After the family hierarchy information, the names of two family members X & Y are 
also passed as the input. The value of property V inherited by the family member X 
is also given as the input.The program must find and print the value of property inherited by the family member Y.
Note: If the value of the property of a parent cannot be divided by the 
number of children without leaving a remainder, then consider the floor 
value as the amount inherited by a single child. (As an example if the property 
worth is 10000 and number of children is 3, then the amount inherited by a single child is 3333).
Boundary Condition(s):
1 <= N <= 50
1 <= Length of name of a family member <= 100
0 < V <= 999999999
Input Format:
The first line contains N.
The next N lines contain the name of parent and child names in each line separated by space(s).
The (N+2)th line contains X and V separated by space(s).
The (N+3)th line contains Y.

Output Format:
The first line contains the value of property inherited by Y.

Example Input/Output 1:
Input:
6
Ram Ragu
Ram Dheeran
Ragu Vimal
Dheeran Kamal
Dheeran Lokesh
Dheeran Sabari
Lokesh 10000
Ragu

Output:
30000

Explanation:
The family hierarchy is as given below.
Ram
 - Ragu
    - Vimal
 - Dheeran
    - Kamal
    - Lokesh
    - Sabari
Lokesh inherits 10000. Hence amount inherited by Dheeran is 3*10000 = 30000 (As 3 children).
As Ragu and Dheeran are siblings, Ragu also inherits 30000.

Example Input/Output 2:
Input:
8
Kamal Laxman
Laxman Maaran
Maaran Dilip
Maaran Kumar
Dilip Sanjay
Kumar Magesh
Sanjay Harish
Sanjay Kishore
Harish 2500
Magesh

Output:
5000


#include <iostream>
#include <algorithm>
using namespace std;
int n,val;

string s1[50],s2[50],r,target;
int findroot(string x)
{
    if(x==r)
      return val;
      
    for(int i=0;i<n;i++)
      if(x==s1[i])
      {
        int fi=count(s1,s1+n,x)*findroot(s2[i]);
        if(fi!=0)
          return fi;
      }
    return 0;
}
void divide(string x,int res)
{
    if(x==target)
      {
        cout<<res;
        exit(0);
      }
    for(int i=0;i<n;i++)
       if(x==s1[i])
          divide(s2[i],res/count(s1,s1+n,x));
}
int main(){
 int i;
 cin>>n;
 for(i=0;i<n;i++)
   cin>>s1[i]>>s2[i];
 cin>>r>>val>>target;
 
 for(i=0;i<n;i++)
  if(count(s2,s2+n,s1[i])==0)
    divide(s1[i],findroot(s1[i]));
}

(or)
#include <iostream>
#include<string>
#include <map>
#include<queue>
using namespace std;
int main(){
 int i,j,k,m,n,t,u,v;
 long long int ans;
 cin>>t;
 string s[10000],s1[10000],s2[10000],tmp,t1,sc;
 map <string,unsigned long long int>child,value;
 queue <string>q;
 map <string,string>parent;
 for(i=0;i<t;i++)
 {
     cin>>s1[i]>>s2[i];
     child[s1[i]]++;
     parent[s2[i]]=s1[i];
 }
 cin>>tmp>>ans;
 value[tmp]=ans;
 
 while(parent.find(tmp)!=parent.end())
 {
     t1=parent[tmp];
     value[t1]=value[tmp]*child[t1];
     tmp=t1;
 }
 cin>>sc;

 q.push(tmp);
 while(!q.empty())
 {   tmp=q.front();
    q.pop();
    for(i=0;i<t;i++)
    {
        if(s1[i]==tmp)
        {
            value[s2[i]]=value[s1[i]]/child[s1[i]];
            q.push(s2[i]);
        }
    }
     
 }
 cout<<value[sc];
 }
 
 
 