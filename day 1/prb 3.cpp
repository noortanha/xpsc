#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
    cin>>t;
    while(t--){
      int n;
    cin>>n;
   string s;
   cin>>s;
   int one=0,z=0;
   for(int i=0;i<n;i++){
    if(s[i]=='1' && s[i+1]=='0') one++;
    if(s[i]=='0' && s[i+1]=='1') z++;
   }
   cout<<max(one,z)<<endl;
    }

}
