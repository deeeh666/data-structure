#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    vector<double>v(n+1);
    double maxl=0;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        maxl=max(maxl,v[i]);
    }
    double l=0,r=maxl,ans=0;
    double eps=1e-4;//设置一个精度限制
    while(r-l>eps)
    {
        int s=0;
        double mid=(r+l)/2;
        for(int i=1;i<=n;i++)
        {
            int t=v[i]/mid;
            s+=t;
        }
        if(s>=k)
        {
            ans=mid;
            l=mid;
        }
        else{
            r=mid;
        }
    }
    printf("%.2f\n",ans);
}
