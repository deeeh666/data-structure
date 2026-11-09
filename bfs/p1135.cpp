#include <bits/stdc++.h>
using namespace std;
int n,a,b;
int k[210];
int vis[210];
void bfs(int a,int b)
{
    queue<int>q;
    q.push(a);
    vis[a]=0;
    while(!q.empty())
    {
        int cur=q.front();
        q.pop();
        if(cur==b){
            cout<<vis[cur]<<endl;
            return;
        }
        for(int i=1;i>=-1;i-=2)
        {
            int next=cur+i*k[cur];
            if(next>=1&&next<=n&&vis[next]==-1)
            {
                vis[next]=vis[cur]+1;
                q.push(next);
            }
        }
    }
    cout<<-1<<endl;
}
int main()
{
    cin>>n>>a>>b;
    for(int i=1;i<=n;i++) cin>>k[i];
    memset(vis,-1,sizeof(vis));
    bfs(a,b);
}
