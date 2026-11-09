
/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long x;
    cin>>n>>x;
    vector<long long>v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    long long sum=0;
    for(int i=1;i<n;i++)
    {
        if(v[i]+v[i+1]>x)
        {
            long long now=v[i]+v[i+1]-x;
            sum+=now;
            if(v[i+1]-now<0)
            {
                v[i+1]=0;
                int t=now-v[i+1];
                v[i]=v[i]-t;
            }
            else{
                v[i+1]=v[i+1]-now;
            }
        }
    }
    cout<<sum<<endl;
}
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long x;
    cin>>n>>x;
    vector<long long>v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    long long sum=0;
    for(int i=1;i<n;i++)
    {
        if(v[i]+v[i+1]>x)
        {
            if(v[i]<=v[i+1])
            {
                while(v[i]+v[i+1]>x)
                {
                    if(v[i+1]==0)
                    {
                        v[i]--;
                        sum++;
                    }
                    else{
                        v[i+1]--;
                        sum++;
                    }
                }
            }
            else
            {
                while(v[i]+v[i+1]>x)
                {
                    if(v[i+1]==0)
                    {
                        v[i]--;
                        sum++;
                    }
                    else{
                        v[i+1]--;
                        sum++;
                    }
                }
            }
        }
    }
    cout<<sum<<endl;
}
