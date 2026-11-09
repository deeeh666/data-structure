#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<long long >v(n+1);
    for(int i=1;i<=n;i++)
    {
        long long x;
        cin>>x;
        v[i]=x;
    }
    for(int i=0;i<m;i++)
    {
        long long x;
        cin>>x;
        int l=1,r=n,ans=-1;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(v[mid]==x)
            {
                ans=mid;
                r=mid-1;
            }
            else if(v[mid]>x)
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        cout<<ans<<" ";
    }
    cout<<endl;
}
