#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long s;
    cin>>n>>s;
    vector<pair<int,int> >v;
    int maxv=0;
    long long minc=1e16;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
        maxv=max(maxv,y);
    }
    for(int i=0;i<=maxv;i++)
    {
        long long ct=i*s;
        for(auto it=v.begin();it!=v.end();it++)
        {
            int x=it->first;
            int y=it->second;
            if(y>i)
            {
                ct+=(long long)(y-i)*x;
            }
        }
        minc=min(minc,ct);
    }
    cout<<minc<<endl;
    return 0;
}
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long s,ct=0;
    cin>>n>>s;
    vector<pair<int,int> >v;
    int c=n;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    while(c>0)
    {
        long long now=0;
        for(int i=0;i<n;i++)
        {
            if(v[i].second>0)
            {
                now+=v[i].first;
            }
        }
        if(now>s)
        {
            ct+=s;
            for(int i=0;i<n;i++)
            {
                if(v[i].second>0)
                {
                    v[i].second--;
                    if(v[i].second==0)
                    {
                        c--;
                    }
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++) {
                if (v[i].second > 0) {
                    ct+= (long long)v[i].second * v[i].first;
                    v[i].second = 0;
                }
            }
            c=0;
        }
    }
    cout<<ct<<endl;
    return 0;
}
*/
