#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    long long len;
    cin>>len>>n>>m;
    vector<long long>v(n+2);
    v[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    v[n+1]=len;
    long long l=1,r=len,ans=0;
    while(l<=r)
    {
        long long mid=l+(r-l)/2;
        int c=0;
        long long d=0;
        for(int i=1;i<=n+1;i++)
        {
            if(v[i]-d<mid)
                c++;
            else
                d=v[i];
        }
        if(c<=m)
        {
            ans=mid;
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<ans<<endl;

}
