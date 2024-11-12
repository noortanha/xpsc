#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    cin >>t;

   while(t--){
    cin>>n;
    long long a[n];
   map<int,int>m;

    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i] !=0){

       m[a[i]]++;

        }

   }
    if(m.size()==1 || m.size()==0) cout<< "yes"<<endl;
     else cout<< "no"<<endl;

}
}
