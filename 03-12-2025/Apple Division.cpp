#include <bits/stdc++.h>
using namespace std;
int n;
long long mn=1e18;
void fun (int i,long long sum1,long long sum2,vector<long long>&v)
{
    if(i==n)
    {
        mn=min(mn,abs(sum1-sum2));
        return;
    }
    fun(i+1,sum1+v[i],sum2,v);
   fun(i+1,sum1,sum2+v[i],v);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n;
    vector<long long>v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
  fun(0,0,0,v);
    cout<<mn<<endl;
    return 0;
}
