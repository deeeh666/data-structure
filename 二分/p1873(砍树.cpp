#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long m;
    cin>>n>>m;
    vector<long long>v(n+1);
    long long maxh=0;
    for(int i=1;i<=n;i++){
        cin>>v[i];
        maxh=max(maxh,v[i]);
    }
    long long l=1,r=maxh,ans=0;
    while(l<=r)
    {
        long long mid=l+(r-l)/2;
        long long sum=0;
        for(int j=1;j<=n;j++)
        {
            if(v[j]>mid)
            {
                sum+=v[j]-mid;
            }
        }
        if(sum>=m)
        {
            ans=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
