#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n+1);
    vector<int>a(n+1);
    v[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        v[i]=v[i-1]+a[i];
    }
    int sum=v[1],minc=0;
    for(int i=1;i<=n;i++)
    {
        sum=max(sum,v[i]-minc);
        minc=min(minc,v[i]);
    }
    cout<<sum<<endl;
}
