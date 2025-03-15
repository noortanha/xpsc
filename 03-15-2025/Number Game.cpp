#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool fun(vector<int>&a, int n,int k)
{
    multiset<int>ms;
    for(auto vv:a)
    {
        ms.insert(v);
    }
    for(int i=1;i<=k;i++)
    {
        if(ms.empty()) return false;
        int v = k-i+1;
        auto it = ms.upper_bound(v);
        if(it==ms.begin()) return false;
        it--;
        ms.erase(it);

        if(!ms.empty())
        {
            it = ms.begin();
            ll x =*it;
            x += v;
            ms.erase(it);
            ms.insert(x);
        }
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)
        cin>>a[i];

        int l=0,r=n,ans=0;
        while(l<=r)
        {
            int m = l+(r-l)/2;
            if(fun(a,n,m))
            {
                ans=m;
                l=m+1;
            }
            else r=m-1;

        }
        cout<<ans<<endl;
    }
    return 0;
}
