#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    string s;
    cin>>a>>s;
    string st;
    for(char c:s)
    {
        st.push_back(c);
        if(st.size()>=3)
        {
            size_t len=st.size();
            if(st[len-3]=='n'&st[len-2]=='i'&&st[len-1]=='u'){
                st.pop_back();
                st.pop_back();
                st.pop_back();
            }
        }
        if(st.size()>=2)
        {
            size_t len=st.size();
            if(st[len-2]=='m'&&st[len-1]=='o'){
                st.pop_back();
                st.pop_back();
            }
        }

    }
    if(st.empty()) cout<<"Yes";
    else cout<<"No";
}
