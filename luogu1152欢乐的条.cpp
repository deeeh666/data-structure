#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int a=n-1;
    vector<bool>t(n,false);
    for(int i=1;i<n;i++)
    {
        int b=abs(v[i]-v[i-1]);
        if(b<1||b>n-1)
        {
            cout<<"Not jolly"<<endl;
            return 0;
        }
        t[b]=true;
    }
    for(int i=1;i<n-1;i++)
    {
        if(!t[i])
        {
            cout<<"Not jolly"<<endl;
            return 0;
        }
    }
    cout<<"Jolly"<<endl;
    return 0;
}
