#include <bits/stdc++.h>
using namespace std;
const long long m=1e8;
long long b[m];
long long p[m];
long long num=0;
void is()
{
  long long i,j;
  b[0]=1;
  b[1]=1;
  for(long long i=2;i<m;i++)
  {
    if(b[i]==0){
      p[num]=i;
      num++;
      for(long long j=i;j*i<m;j++) b[i*j]=1;
    }
  }
}
int main()
{
  is();
  for(int i=0;i<100;i++){
    cout<<p[i]<<" ";
  }
  cout<<endl;
  long long n;
  while(cin>>n){
    int result=n;
    for(int i=0;i<sqrt(n);i++){
      if(n%p[i]==0){
        float a=1.0/p[i];
        result=result*(1-a);
      }
    }
    cout<<result<<endl;
  }
}
