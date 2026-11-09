#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<pair<int,int> >v;
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end());
    int c=0,sum=0;
    for(int i=0;i<m;i++)
    {
        c=c+v[i].second;
        if(c<=n)
        {
            sum=sum+v[i].first*v[i].second;
            if(c==n)
                break;
        }
        else
        {
            int c1=n-(c-v[i].second);
            sum=sum+c1*v[i].first;
            break;
        }
    }
    cout<<sum<<endl;

}
