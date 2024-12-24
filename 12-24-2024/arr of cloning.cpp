#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
  int n;
      cin >> n;
     vector<int>v(n);
     for(int i=0;i<n;i++) cin>>v[i];
   map<int, int>f;
        for (int x : v) {
            f[x]++;
        }
     int ans=0,mx=0;
      for (auto it :f) {
            mx = max(mx,it.second);
        }


        while(mx<n){
                 int rem= n-mx;
            ans++;
            int x=mx;
            ans +=min(rem,x);
            mx +=min(x,rem);
        }

     cout<<ans<<endl;
   }

   return 0;
}
