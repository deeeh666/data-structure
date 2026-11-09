#include <bits/stdc++.h>
using namespace std;
int n,k;
int ans[210];
int c=0;
void dfs(int se,int restn,int minv)
{
    if(se==k)
    {
        if(restn>=minv){
            c++;
        }
        return;
    }
    for(int i=minv;i*(k-se+1)<=restn;i++)
    {
        ans[se]=i;
        dfs(se+1,restn-i,i);
    }
}
int main()
{
    cin>>n>>k;
    dfs(1,n,1);
    cout<<c<<endl;
}
