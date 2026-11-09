#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int sum=0;
    int t=s.size();
    for(int i=0;i<t;i++)
    {
        int l=-1,r=t;
        for(int j=i-1;j>=0;j--)
        {
            if(s[j]==s[i])
            {
                l=j;
                break;
            }
        }
        for(int j=i+1;j<t;j++)
        {
            if(s[j]==s[i])
            {
                r=j;
                break;
            }
        }
        sum+=(i-l)*(r-i);
    }
    cout<<sum<<endl;
    return 0;
}
