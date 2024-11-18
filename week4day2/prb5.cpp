#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >>t;
    while (t--) {
        long long a,b,n;
        cin >>a>>b>> n;
        long long v[n];
       long long ans=0;
        if(b>=a){
            ans=a;
 b=a;
        }
        else ans=b;
        for (long long i=0; i<n; i++) {
            cin>>v[i];
            if(v[i]+1<=a){
               ans+=v[i];

            }
            else {
                 ans+=a-1;

            }
        }

        cout<<ans<<endl;
    }

}
