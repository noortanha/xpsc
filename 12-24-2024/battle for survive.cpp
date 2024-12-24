
#include <bits/stdc++.h>
using namespace std;


int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int t;
   cin >> t;
   while (t--) {
      long long  n;
      cin >> n;
      vector<long long> a(n);
long long ans,sum = 0;
      for (int i = 0;i < n;i++) {
         cin >> a[i];
         sum +=a[i];
      }

      ans= sum-  2*a[n-2];

      cout << ans << endl;
   }

   return 0;
}

