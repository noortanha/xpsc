
#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    set<int>s;
 int vis=0;
    for(int i=n-1;i>=0;i--){
        s.insert(a[i]);
        vis++;
        if(vis>s.size()) break;
    }
    cout<<n-s.size()<<endl;
}
}
