#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    cin>>n>>p;
    vector<int>v(n+1),d(n+1),a(n+1);
    for(int i=1;i<=n;i++){
        cin>>a[i];
        d[i]=a[i]-a[i-1];
    }
    for(int i=0;i<p;i++)
    {
        int x,y,va;
        cin>>x>>y>>va;
        d[x]=d[x]+va;
        if(y!=n) d[y+1]=d[y+1]-va;
    }
    for(int i=1;i<=n;i++) v[i]=v[i-1]+d[i];
    int minc=v[1];
    for(int i=1;i<=n;i++)
    {
        minc=min(minc,v[i]);
    }
    cout<<minc<<endl;
}
