#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<long long>v(n+1);
    long long sum=0,maxs=0;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        sum+=v[i];
        maxs=max(maxs,v[i]);
    }
    long long l=maxs,r=sum;
    long long ans=0;
    while(l<=r)
    {
        long long mid=l+(r-l)/2;
        long long cs=0;
        int c=1;
        for(int i=1;i<=n;i++)
        {
            if(cs+v[i]>mid)
            {
                c++;
                cs=0;
            }
                cs+=v[i];
        }
        if(c<=m)
        {
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans<<endl;

}
