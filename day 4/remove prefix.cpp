
#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    set<int>s;
    int a[n];
    for(int i=0;i<n;i++){
    cin>>a[i];

}
int ans=0;
for(int i=n-1;i>=0;i--){
    if(s.find(a[i])==s.end())
   break;
  else s.insert(a[i]);
}
cout<<n-s.size()<<endl;
}
}
