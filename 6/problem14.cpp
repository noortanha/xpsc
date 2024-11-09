#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
int t;
cin>>t;
while(t--)
{ int n;
    cin>>n;
    map<int ,int>mp;
    for(int i=0;i<n;i++){
            int x;
        cin>>x;
        mp[x]++;
    }
    auto it=mp.begin();
    int l=it->first;
    int cnt= it->second;
    int ans= it->second;
    it++;
    for(;it !=mp.end();it++){

    if(it->first !=(l+1)) ans +=it->second;
    else ans += max(0, it->second-cnt);
    l=it->first, cnt= it->second;
    }
cout<<ans<<endl;
}
}
