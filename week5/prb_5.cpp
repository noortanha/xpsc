#include <bits/stdc++.h>
using namespace std;

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n, k;
   cin >> n >> k;
   vector<int> a(n);
   for (int i = 0; i < n; i++) {
      cin >> a[i];
   }

   map<int, int> f;
   int l=0;
   long long ans =0;

   for (int r = 0; r<n; r++) {
      f[a[r]]++;

      while (f.size() > k) {
         f[a[l]]--;
         if (f[a[l]] == 0) {
            f.erase(a[l]);
         }
         l++;
      }

      ans += (r - l + 1);
   }

   cout << ans <<endl;

   return 0;
}
