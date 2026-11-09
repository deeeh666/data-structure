#include <bits/stdc++.h>
using namespace std;
bool check(int n,bool a[])
    {
        while(n)
        {
            int x=n%10;
            if(x==0||a[x])
               {
                   return false;
               }
            a[x]=true;
            n=n/10;
        }
        return true;
    }
int main()
{
    vector<int>v;
    for(int i=123;i<=333;i++)
    {
        bool a[10]={false};
        int s=2*i;
        int t=3*i;
        if(!check(i,a))
            continue;
        if(!check(s,a))
            continue;
        if(!check(t,a))
            continue;
        v.push_back(i);
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "<<2*v[i]<<" "<<3*v[i]<<endl;
    }
    return 0;
}
