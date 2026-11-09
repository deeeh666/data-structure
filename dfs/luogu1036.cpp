/*#include <bits/stdc++.h>
using namespace std;
int p(long long n)
{
    long long x=sqrt(n);
    if(n==2)
        return 1;
    if(n%2==0||n<2)
        return 0;
    for(int i=3;i<=x;i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    int n,k,s=0;
    cin>>n>>k;
    vector<long long>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int mask=0;mask<(1<<n);mask++)
    {
        int a=0;
        long long sum=0;
        for(int i=0;i<n;i++)
        {
            if(mask&(1<<i))
            {
                a++;
                sum=sum+v[i];
            }
        }
        if(a==k){
            if(p(sum))
            {
                s++;
            }
        }
    }
    cout<<s<<endl;
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int n,k;
long long c=0;
vector<long long>v(25);
int p(long long n)
{
    long long x=sqrt(n);
    if(n==2)
        return 1;
    if(n%2==0)
        return 0;
    if(n<2)
        return 0;
    for(int i=3;i<=x;i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
void dfs(int now,int se,long long sum)
{
    if(se==k)
    {
        if(p(sum))
        {
            c++;
        }
        return;
    }
    for(int i=now;i<=n;i++)
    {
        dfs(i+1,se+1,sum+v[i]);
    }

}
int main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    dfs(1,0,0);
    cout<<c<<endl;
    return 0;
}

