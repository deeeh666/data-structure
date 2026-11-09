/*#include<bits/stdc++.h>
using namespace std;
struct money{
    int a;
    int b;
    int c;
};
int main()
{
    ios_base::sync_with_stdio(false);
    int n, m;
    cin>>n>>m;
    vector<int>p(m+1);
    vector<money>mon(n+1);
    for(int i=1;i<=m;i++) cin>>p[i];
    for(int i=1;i<n;i++)
    {
        cin>>mon[i].a>>mon[i].b>>mon[i].c;
    }
    long long sum=0;
    vector<int>pass(n+1);
    for(int i=1;i<m;i++)
    {
        int maxt=max(p[i],p[i+1]);
        int mint=min(p[i],p[i+1]);
        int t=maxt-mint;
        while(t>=1)
        {
            pass[t+mint-1]++;
            t--;
        }
    }
    for(int i=1;i<n;i++)
    {
        if(pass[i]==0) continue;
        long long ia=(long long)mon[i].a*pass[i];
        long long ib=(long long)mon[i].b*pass[i]+mon[i].c;
        long long now=min(ia,ib);
        sum+=now;
    }
    cout<<sum<<endl;
}
*/
#include<bits/stdc++.h>
using namespace std;
struct money{
    int a;
    int b;
    int c;
};
int main()
{
    ios_base::sync_with_stdio(false);
    int n, m;
    cin>>n>>m;
    vector<int>p(m+1);
    vector<money>mon(n+1);
    for(int i=1;i<=m;i++) cin>>p[i];
    for(int i=1;i<n;i++)
    {
        cin>>mon[i].a>>mon[i].b>>mon[i].c;
    }
    long long sum=0;
    vector<int>pass(n+2),s(n+1);
    for(int i=1;i<m;i++)
    {
        int maxt=max(p[i],p[i+1]);
        int mint=min(p[i],p[i+1]);
        pass[mint]++;
        pass[maxt]--;
    }
    for(int i=1;i<n;i++) s[i]=s[i-1]+pass[i];
    for(int i=1;i<n;i++)
    {
        long long ia=(long long)mon[i].a*s[i];
        long long ib=(long long)mon[i].b*s[i]+mon[i].c;
        long long now=min(ia,ib);
        sum+=now;
    }
    cout<<sum<<endl;
}
