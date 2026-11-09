#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a;
    stack<char>s;
    while(cin>>a&&a!='@')
    {
        if(a=='('){
            s.push(a);
        }
        if(a==')'){
            if(s.empty())
            {
                cout<<"No"<<endl;
                return 0;
            }
            s.pop();
        }
    }
    if(s.empty())
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;
}
