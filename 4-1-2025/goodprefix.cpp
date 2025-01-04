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
   vector<int> a(n);
   for (int i = 0;i  < n;i++) cin>>a[i];
   int mx= -INT_MAX,sum=0,cnt=0;
   for(int i=0;i<n;i++){
    sum +=a[i];
    mx= max(mx,a[i]);
    if(sum-mx==mx) cnt++;
   }
   cout<<cnt<<endl;
    }
}
