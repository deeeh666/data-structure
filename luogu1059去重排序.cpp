/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    set<int >st;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        st.insert(x);
    }
    for(auto &ele :st)
    {
        cout<<ele<<" ";
    }
    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int >v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<int>result;
    result.push_back(v[0]);
    for(int i=1;i<n;i++)
    {
        if(v[i]!=v[i-1])
        {
            result.push_back(v[i]);
        }
    }
    int a=result.size();
    cout<<a<<endl;
    for(int i=0;i<a;i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
}
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int >v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    cout<<v.size()<<endl;
    for(auto it=v.begin();it!=v.end();++it)
    {
        cout<<*it<<' ';
    }
}
