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
   vector<int> a(n),v;
   for (int i = 0;i  < n;i++) cin>>a[i];

   int mn= INT_MAX;
   for (int i = 0;i  < n;i++)
   {
       int l=-1,r=-1;
       if(i-1 >=0) l= abs(a[i]-a[i-1]);
       if(i+1 <n) r= abs(a[i]-a[i+1]);
       v.push_back(max(l,r));
   }
   for(int i=0;i<v.size();i++){

    mn= min(mn,v[i]);

   }
   cout<<mn<<endl;
    }
}
