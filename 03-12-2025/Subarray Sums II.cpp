
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,x;
    cin>>n>>x;
    map<long long,long long>mp;
    long long  sum=0,ans=0;
    mp[0]=1;
    for(int i=0;i<n;i++)
    {
        int v;
        cin>>v;
        sum+=v;
        ans+=m[sum-x];
        mp[sum]++;
    }
    cout<<ans<<endl;

    return 0;
}
