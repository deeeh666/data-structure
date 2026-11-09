#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string,vector<string> >mp;
    int n,m;
    cin>>n>>m;
    vector<string>v;
    for(int i=0;i<m;i++)
        {
            string a,b;
            cin>>a>>b;
            if(mp.find(a)==mp.end())
            {
                v.push_back(a);
            }
            mp[a].push_back(b);
        }
    for(auto it=v.begin();it!=v.end();it++)
        {
            cout<<*it;
            for(auto it1=mp[*it].begin();it1!=mp[*it].end();it1++)
                {
                    cout<<" "<<*it1;
                }
            cout<<endl;
        }
}
