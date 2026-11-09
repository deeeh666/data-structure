#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    stack<int>drity;
    for(int i=n;i>=1;i--){
            drity.push(i);
        }
    stack<int>wash;
    stack<int>com;
    while(!wash.empty()||!drity.empty())
        {
            int x,y;
            cin>>x>>y;
            if(x==1)
            {
                for(int i=y;i>=1;i--)
                    {
                        int a=drity.top();
                        wash.push(a);
                        drity.pop();
                    }
            }
            else{
                for(int i=y;i>=1;i--)
                    {
                        int a=wash.top();
                        com.push(a);
                        wash.pop();
                    }
            }
        }
    while(com.size()>=1)
        {
            cout<<com.top()<<endl;
            com.pop();
        }
}
