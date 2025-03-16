
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;

        auto f=[&](ll m)
        {
            ll x = m*(m-1)/2;
            return x<=n;
        };

        ll l=1,r=2e10,ans=1;
        while(l<=r)
        {
            ll m= l+(r-l)/2;
            if(f(m))
            {
                ans= max(ans,m);
                l=m+1;
            }
            else r=m-1;

        }
        ll x=ans*(ans-1)/2;
        cout<<ans+(n-x)<<endl;
    }
    return 0;
}
