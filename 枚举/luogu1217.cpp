/*
#include <bits/stdc++.h>
using namespace std;
int p(long long n)
{
    long long x=sqrt(n);
    if(n==2)
        return 1;
    if(n%2==0||n<2)
        return 0;
    for(int i=3;i<=x;i+=2)
    {
        if(n%i==0)
            return 0;
    }
    return 1;
}
int main()
{
    long long a,b;
    cin>>a>>b;
    vector<long long>v;
    for(int i=a;i<=b;i++)
    {
        string s=to_string(i);
        string s1 = string(s.rbegin(), s.rend());
        if(s==s1)
        {
            if(p(i))
                v.push_back(i);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}
*/
/*#include <bits/stdc++.h>
using namespace std;
vector<char>p(int n)
{
    vector<char>is(n+1,1);
    is[0]=is[1]=0;
    long long x=(long long)sqrt(n);
    for(long long i=2;i<=x;i++)
    {
        if(is[i])
        {
            for(long long j=i*i;j<=n;j+=i)
            {
                is[j]=0;
            }
        }
    }
    return is;
}
int main()
{
    long long a,b;
    cin>>a>>b;
    vector<long long>v;
    for(long long i=a;i<=b;i++)
    {
        string s=to_string(i);
        string s1 = string(s.rbegin(), s.rend());
        if(s==s1)
        {
            v.push_back(i);
        }
    }

    auto is=p(v.back());
    for(long long i=2;i<=v.back();i++)
    {
        if(is[i])
            cout<<i;
    }
}
*/
#include <bits/stdc++.h>
using namespace std;
bool P(long long n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (long long i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}
bool is(long long n) {
    if (n < 0) return false;
    long long original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}
int main() {
    long long a, b;
    cin >> a >> b;
    for (long long i = a; i <= b; i++) {
        if (is(i) && P(i)) {
            cout << i << endl;
        }
    }
    return 0;
}
