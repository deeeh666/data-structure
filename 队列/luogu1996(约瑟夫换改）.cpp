#include <bits/stdc++.h>
using namespace std;
bool pan(int n)
{
    if(n%7==0)
        return true;
    while(n)
        {
            int a=n%10;
            if(a==7)
                return true;
            n=n/10;
        }
    return false;
}
int main()
{
    int n,m,t;
    cin>>n>>m>>t;
    queue<int >q;
    vector<string>v;
    for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }
    for(int i=1;i<=n;i++)
        {
            q.push(i);
        }
    for(int i=1;i<m;i++)
        {
            int a=q.front();
            q.pop();
            q.push(a);
        }
    int c=t;
    while(q.size()>1)
        {
                    int a=q.front();
                    q.pop();
                    if(!pan(c))
                    {
                        q.push(a);
                    }
                    c++;
        }
    int now=q.front();
    cout<<v[now-1]<<endl;
    return 0;
}
