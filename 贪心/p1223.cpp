#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int> >v;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        v.push_back({t,i+1});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i].second<<" ";
    }
    cout<<endl;
    long long s=0,now=0;
    for(int i=0;i<n;i++)
    {
        s=s+now;
        now=now+v[i].first;
    }
    double av=s*1.0/n;
    printf("%.2f\n",av);
}
