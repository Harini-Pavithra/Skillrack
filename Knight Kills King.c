A knight in a chess game is determined to kill the enemy king. 
The chess board is of the size N*N. The knight can move through the empty cells but he cannot
land on a cell where friendly units are placed. The knight is represented as K, 
the friendly units are represented as F, the enemy king is 
represented as E and the empty cells are represented as X. 
Find the minimum number of moves needed for the knight to reach the enemy king. 
The knight moves to a square that is two squares away horizontally and one square vertically, 
or two squares vertically and one square horizontally. The complete move therefore looks like the letter L.
Input Format:
The first line contains N.
The next N lines represent the chess board.

Output Format:
The first line contains the minimum number of moves required to reach the enemy king by the knight.

Example Input/Output 1:
Input:
5
KXXXX
XXXXX
XXXXX
XXXEX
XXXXX

Output:
2

Example Input/Output 2:
Input:
7
EXXXXXX
XXXXXXX
FFXXXXX
XXKXXXX
FXXXXFX
XXXXXXX
XXXXXXX

Output:
3

#include <iostream>
#include<queue>
using namespace std;
struct state
{
  int x,y,dis;
  state() {}
  state(int x,int y,int dis):x(x),y(y),dis(dis) {}
};
bool inside(int x,int y,int n)
{
    if(x>=0&&y>=0&&x<n&&y<n)
        return true;
    return false;
}
int main(int argc, char** argv)
{
    int n;
    cin>>n;
    int chess[n][n],src[2],des[2];;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            char t;
            cin>>t;
            if(t=='K')
            {
               src[0]=i;
               src[1]=j;
               chess[i][j]=1;
            }
            else if(t=='E')
            {
                des[0]=i;
                des[1]=j;
                chess[i][j]=0;
            }
            else if(t=='F')
                chess[i][j]=1;
            else
                chess[i][j]=0;
        }
    int x=src[0],y=src[1],dis=0;
    int dx[8]={-2,-2,2,2,-1,-1,1,1};
    int dy[8]={-1,1,-1,1,-2,2,-2,2};
    queue<state> q;
    q.push(state(x,y,dis));
    state st;
    while(!q.empty())
    {
        st=q.front();
        q.pop();
        if(st.x==des[0]&&st.y==des[1])
            break;
        for(int i=0;i<8;i++)
        {
           x=st.x+dx[i];
           y=st.y+dy[i];
           if(inside(x,y,n)&&!chess[x][y])
           {
               q.push(state(x,y,st.dis+1));
               chess[x][y]=1;
           }
        }
    }
    cout<<st.dis;
}
(or)

#include <iostream>
#include <map>
#include <queue>
#include <climits>
using namespace std;
char a[1000][1000];
int row[] = {2,2,-2,-2,1,1,-1,-1};
int col[] = {-1,1,1,-1,2,-2,2,-2};
bool valid(int x,int y,int n){
    if(x<0||y<0||x>=n||y>=n||a[x][y]=='F'){
        return false;
    }
    return true;
}
struct Node{
    int x,y,dist;
    Node(int x,int y,int dist=0):x(x),y(y),dist(dist){}
    bool operator<(const Node& o) const{
        return x < o.x || (x == o.x && y < o.y);
    }
};
int solve(Node s,Node d,int n){
    map<Node,bool> visted;
    queue<Node> q;
    q.push(s);
    while(!q.empty()){
        Node node=q.front();
        q.pop();
        int x=node.x;
        int y=node.y;
        int dist=node.dist;
        if(x==d.x&&y==d.y){
            return dist;
        }
        if(!visted.count(node)){
            visted[node]=true;
            for(int i=0;i<8;i++){
                int x1=x+row[i];
                int y1=y+col[i];
                if(valid(x1,y1,n)){
                    q.push({x1,y1,dist+1});
                }
            }
        }
    }
}

int main(){
    int n,x1,x2,y1,y2;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
            if(a[i][j]=='K'){
                x1=i;
                x2=j;
            }
            if(a[i][j]=='E'){
                y1=i;
                y2=j;
            }
        }
    }
    cout<<solve({x1,x2},{y1,y2},n);
}

(or)

#include <iostream>
using namespace std;
int n,mini=40,a[100][100];
int mx[8]={1,1,2,2,-2,-2,-1,-1},my[8]={-2,2,-1,1,-1,1,2,-2};
int issafe(int a,int b)
{
    return (a>=0 && a<n && b>=0 && b<n);
}

void solve(string s[],int x,int y,int m)
{
    if(mini<=m)
      return;
    for(int i=0;i<8;i++)
      if(issafe(x+mx[i],y+my[i])) 
      {
        if(s[x+mx[i]][y+my[i]]=='X' && a[x+mx[i]][y+my[i]]>m)
        {
         a[x+mx[i]][y+my[i]]=m;
         s[x+mx[i]][y+my[i]]='K';
         solve(s,x+mx[i],y+my[i],m+1);
         s[x+mx[i]][y+my[i]]='X';
        }
        if(s[x+mx[i]][y+my[i]]=='E' && mini>m)
        {
          mini=m+1;
          return;
        }
      }
     
} 

int main(){
 int i,j,x,y;
 cin>>n;
 string s[n];
 
 for(i=0;i<n;i++)
 {
   cin>>s[i];
   for(j=0;j<n;j++)
   {
     if(s[i][j]=='K')
       x=i,y=j;
     a[i][j]=100;
   }
 }
 solve(s,x,y,0);
 cout<<mini;
}