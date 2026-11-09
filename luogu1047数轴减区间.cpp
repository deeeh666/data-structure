#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l,n;
    cin>>l>>n;
    vector<bool >v(l,false);
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        for(int j=x;j<=y;j++)
        {
            v[j]=true;
        }
    }
    int s=0;
    for(int i=0;i<=l;i++)
    {
        if(v[i])
            s++;
    }
    int c=l-s+1;
    cout<<c<<endl;

    return 0;
}
