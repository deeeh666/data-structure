#include <bits/stdc++.h>
using namespace std;
double f(double a,double b,double c,double d,double x)
{
    return a*x*x*x+b*x*x+c*x+d;
}
int main()
{
    double a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<double>v;
    double eps=1e-3;
    for(double i=-100;i<100;i+=0.5)
    {
        double y1=f(a,b,c,d,i);
        double y2=f(a,b,c,d,i+0.5);
        if(y1*y2<0)
        {
            double l=y1,r=y2;
            while(r-l>eps)
            {
                double mid=(l+r)/2;
                if(f(a,b,c,d,mid)*f(a,b,c,d,l)<0)
                {
                    r=mid;
                }
                else{
                    l=mid;
                }
            }
            v.push_back((r+l)/2);
        }
        i+=1;
    }
    for(int i=0;i<v.size();i++)
    {
        printf("%.2f ",v[i]);
    }
    cout<<endl;
}
