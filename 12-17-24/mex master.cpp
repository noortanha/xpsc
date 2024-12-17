#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while (t--) {
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++) cin>>a[i];
int cnt0=0, cnt1=0,cnt=0;
for(int i=0;i<n;i++){
    if(a[i]==0) cnt0++;
    else if(a[i]==1) cnt1++;
    else if(a[i]>1) cnt=1;
}
int x=n-cnt0;
if(cnt0>x+1) {
        if(cnt1==0)
        cout<<1<<endl;

else{
    if(cnt) cout<<1<<endl;
    else cout<<2<<endl;
}
    }
    else cout<<0<<endl;
}
}
