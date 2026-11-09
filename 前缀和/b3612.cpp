#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    vector<int>v(n);
    vector<int>v1(n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        sum+=v[i];
        v1[i]=sum;
    }
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        int ans=v1[y]-v1[x-1];
        cout<<ans<<endl;
    }
}
