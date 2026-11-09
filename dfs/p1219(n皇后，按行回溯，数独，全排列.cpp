#include <bits/stdc++.h>
using namespace std;
int n,c=0;
int path[15];
bool mark[15];
bool diag1[30];//正对角线行-列+n不变
bool diag2[30];//副队剑仙行+列不变
void dfs(int k)
{
    if(k>n)
    {
        c++;
        if(c<=3)
        {
            for(int i=1;i<=n;i++)
            {
                cout<<path[i];
                if(i<n)
                    cout<<" ";
            }
            cout<<endl;
        }
        return;
    }
    for(int i=1;i<=n;i++)
    {
        if(!mark[i]&&!diag1[k-i+n]&&!diag2[k+i])
        {
            path[k]=i;
            mark[i]=true;
            diag1[k-i+n]=true;
            diag2[k+i]=true;
            dfs(k+1);
            mark[i]=false;
            diag1[k-i+n]=false;
            diag2[k+i]=false;
        }
    }
}
int main()
{
    cin>>n;
    dfs(1);
    cout<<c<<endl;
    return 0;
}
