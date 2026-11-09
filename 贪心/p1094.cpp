#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s,n;
    cin>>s>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int l=0,r=n-1,c=0;
    sort(v.begin(),v.end());
    while(l<=r)
    {
        if(v[l]+v[r]<=s)
        {
            c++;
            l++,r--;
        }
        else{
            c++;
            r--;
        }
    }
    cout<<c<<endl;
}
