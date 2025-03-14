#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--)
    {
        int n,q;
        cin >> n >> q;
        vector<long long> a(n+1);
        vector<long long> p(n+1);
        vector<long long> v(n+1);
        for (int i=1;i<=n;i++)
        cin>>a[i];
        for (int i=1;i<=n;i++)
        {
            p[i]=p[i-1]+a[i];
            v[i]=max(v[i-1],a[i]);
        }

        for(int i=0;i<q;i++)
        {
         long long ans =0;
          long long k;
            cin>>k;
            int x= upper_bound(v.begin(),v.end(),k) - v.begin()-1;
            if(x>=0)
                ans=p[x];

            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}
