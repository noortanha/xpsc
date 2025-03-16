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
        ll h,n;
        cin>>h>>n;
        vector<ll> a(n),c(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n;i++)
        cin>>c[i];
        auto it=[&](ll m)
        {
            ll x=0;
            for(int i=0;i<n;i++)
            {
                ll y = (m+c[i]-1)/c[i];
                x += (y*a[i]);
                if(x>=h) return true;
            }
            return false;
        };

        ll l=1,r=1e12,ans=0;
        while(l<=r)
        {
            ll m= l+(r-l)/2;
            if(it(m))
            {
                ans=m;
                r=m-1;
            }
            else l=m+1;

        }
        cout<<ans<<endl;
    }
    return 0;
}
