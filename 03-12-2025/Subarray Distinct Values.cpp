#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,k;
    cin>>n>>k;
    vector<long long>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    long long ans=0,j=0;
    map<long long ,long long>mp;
    for(int i=0;i<n;i++)
    {
        mp[v[i]]++;
        while(mp.size()>k)
        {
            mp[v[j]]--;
            if(mp[v[j]]==0)
            {
                mp.erase(v[j]);
            }
            j++;
        }
        ans+=(i-j+1);
    }
    cout<<ans<<endl;

    return 0;
}
