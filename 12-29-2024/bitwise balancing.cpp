#include <bits/stdc++.h>
using namespace std;
int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int t;
   cin >> t;
   while (t--) {
    long long b,c,d;;
      cin >>b>>c>>d;
    long long a=0LL;
    for(long long i=0;i<64;i++){
        long long aa=(1ll<<i);
         long long bb = aa & b;
long long cc = aa & c;
long long dd = aa & d;

           if( (aa| bb)== dd + ( aa & cc)) a+=aa;
    }
    if( (a |b)== (d+(a&c))) cout<< a<<endl;
    else cout<< -1<<endl;
   }
   return 0;
}
