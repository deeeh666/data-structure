#include <bits/stdc++.h>
using namespace std;
int n,r;
int ans[25];
void dfs(int k,int start)
{
    if(k==r)
    {
        for(int i=0;i<r;i++)
        {
            cout<<setw(3)<<ans[i];
        }
        cout<<endl;
        return;
    }
    for(int i=start;i<=n;i++)
    {
        ans[k]=i;
        dfs(k+1,i+1);
    }
}
int main()
{
    cin>>n>>r;
    dfs(0,1);
}
