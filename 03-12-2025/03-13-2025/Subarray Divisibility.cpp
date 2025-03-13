#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    map<ll,ll>mp;
    ll sum=0,cnt=0;
    mp[0]=1;
    for(int i=0;i<n;i++)
    {
        int v;
        cin>>v;
        sum+=v%n;
        sum=(sum+n)%n;
        cnt+=mp[sum];
        mp[sum]++;
    }
    cout<<cnt<<endl;

    return 0;
}
