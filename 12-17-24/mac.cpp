#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--) {
int n;
cin>>n;
string s;
cin>>s;
string v=s;
reverse(v.begin(),v.end());
if(s<=v){
    if(n%2==0)cout<<s<<endl;
else cout<<s<<v<<endl;
}
else {
  if(n%2==1) cout<<s<<endl;
else
    cout<<v<<s<<endl;

}



}
return 0;
}
