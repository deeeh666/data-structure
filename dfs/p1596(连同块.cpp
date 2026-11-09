#include <bits/stdc++.h>
using namespace std;
int n,m,c=0;
char a[110][110];
bool com[110][110];
int path[10010][3];
int dx[8]={-1,-1,0,1,1,1,0,-1};
int dy[8]={0,1,1,1,0,-1,-1,-1};
void dfs(int x,int y)
{
    com[x][y]=true;
    for(int i=0;i<8;i++)
    {
        int tx=x+dx[i];
        int ty=y+dy[i];
        if(a[tx][ty]=='W'&&tx>=0&&tx<n&&ty>=0&&ty<m&&!com[tx][ty])
        {
            dfs(tx,ty);
        }
    }
}
int main()
{
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
            com[i][j]=false;
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]=='W'&&!com[i][j])
            {
                dfs(i,j);
                c++;
            }
        }
    }
    cout<<c<<endl;
}
