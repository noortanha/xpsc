#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >>t;
    while (t--) {
     long long n,c;
        cin >>n>>c;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
            a[i]+=(i+1);
        }
        sort(a.begin(),a.end());

        long long sum=0,   ans =0;
        for(int i=0;i<n;i++){
            if(sum+a[i]>c) break;
            sum+=a[i];
            ans++;
        }
        cout<<ans<<endl;
    }

}
