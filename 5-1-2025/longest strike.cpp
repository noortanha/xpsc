#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
      int n, k;
        cin >> n>>k;
 vector<int>a(n);
 map<int,int>mp;
        for (int i = 0; i < n; i++) {
            cin >>a[i];
            mp[a[i]]++;

        }
        sort(a.begin(), a.end());
        int L=-1, R=-1, l=-1,r;
        for (int i = 0; i < n; i++) {
        if(mp[a[i]]<k) continue;
        if(l==-1)l=a[i];
        if(i==n-1 || a[i+1]-a[i]>1 || mp[a[i+1]]<k){
            r=a[i];
            if(r-l>R-L){
                R=r, L=l;
            }
            l=-1,r=-1;
        }
        }
        if(L==-1)
        cout <<-1 << endl;
        else  cout <<L << " " <<R<< endl;
    }

    return 0;
}
