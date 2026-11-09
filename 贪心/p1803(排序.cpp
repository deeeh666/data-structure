#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<long long,long long>a,pair<long long,long long>b)
{
    return a.second<b.second;
}
int main()
{
    int n;
    cin>>n;
    vector<pair<long long,long long> >v;
    for(int i=0;i<n;i++)
    {
        long long x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    sort(v.begin(),v.end(),cmp);
    long long end=0;
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(v[i].first>=end)
        {
            c++;
            end=v[i].second;
        }
    }
    cout<<c<<endl;
}
