/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    cin>>n>>c;
    vector<long long>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    int ans=0,j=0;
    for(int i=0;i<n;i++)
    {
        while(j<n&&v[j]-v[i]<c)
        {
            j++;
        }
        if(j<n&&v[j]-v[i]==c)
        {
            int k=j;
            while(k<n&&v[k]==v[j])
            {
                k++;
            }
            ans=ans+(k-j);
        }
    }
    cout<<ans<<endl;
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,c;
    cin>>n>>c;
    vector<long long>v(n);
    unordered_map<long long,int>m;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        m[v[i]]++;
    }
    long long ans=0;
    for(int i=0;i<n;i++)
    {
        long long t=v[i]-c;
        if(m.find(t)!=m.end())
        {
            ans+=m[t];
        }
    }

    cout<<ans<<endl;
    return 0;
}
