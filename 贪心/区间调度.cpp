#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int>a,pair<int,int>b)
{
    return a.second<b.second;
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int> >v;
    for(int i=0;i<n;i++)
        {
            int x,y;
            cin>>x>>y;
            v.push_back({x,y});
        }
    sort(v.begin(),v.end(),cmp);
    int c=1,now=v[0].second;
    for(int i=1;i<n;i++)
        {
            if(now<v[i].first)
            {
                now=v[i].second;
                c++;
            }
        }
    cout<<c<<endl;
}
