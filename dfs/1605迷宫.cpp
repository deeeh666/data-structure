#include <bits/stdc++.h>
using namespace std;
int n,m,t,ct=0,zx,zy,x,y;
bool mark[6][6];
bool a[6][6];
int path[30][3];
int dx[4]={-1,0,1,0};
int dy[4]={0,1,0,-1};
void dfs(int x,int y,int k)
{
    path[k][1]=x;
    path[k][2]=y;
    if(x==zx&&y==zy){
        ct++;
        return;
    }
    for(int i=0;i<4;i++)
    {
        int tx=x+dx[i];
        int ty=y+dy[i];
        if(mark[tx][ty]==false&&tx>=1&&tx<=n&&ty>=1&&ty<=m&&a[tx][ty]){
            mark[tx][ty]=true;
            dfs(tx,ty,k+1);
            mark[tx][ty]=false;
            path[k+1][1]=x;
            path[k+1][2]=y;
        }
    }
}
int main()
{
    cin>>n>>m>>t;
    cin>>x>>y>>zx>>zy;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            a[i][j]=true;
        }
    }
    mark[x][y]=true;
    for(int i=0;i<t;i++)
    {
        int c,b;
        cin>>c>>b;
        a[c][b]=false;
    }
    dfs(x,y,1);
    cout<<ct<<endl;
}
