#include <bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
      int n,m;
      cin >> n>>m;
      if(n>=m){
        int ans= n-m;
        if(ans%2==0) cout<< "YES"<<endl;
        else cout<< "NO"<<endl;
      }
      else cout<< "NO"<<endl;

   }
   return 0;
}
