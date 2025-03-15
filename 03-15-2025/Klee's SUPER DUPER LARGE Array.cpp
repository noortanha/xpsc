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
        int n,k;
        cin>>n>>k;
        auto it =[&](ll mid, ll k)
        {
            return (mid * (2*k+mid-1)) / 2;
        };

        ll l=1,r=n,ans=1e18;
        while(l<=r)
        {
            ll mid=l+(r-l)/2;
            ll a = it(mid,k);
            ll b = it(n-mid,k+mid);
            ans = min(ans,abs(a-b));
            if(b>=a) l=mid+1;
            else
                r=mid-1;
        }
        cout <<ans<< endl;
    }
    return 0;
}
