#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin >>n;
        vector<int>p(n);
        string s;
        for (int i =0; i<n; i++) {
            cin>>p[i];
        }
        cin>>s;
        set<pair<int,int>>l,d;

        for (int i =0; i<n; i++) {
            if (s[i]=='1') {
                l.insert({p[i], i});
            }
            else {
                d.insert({p[i], i});
            }
        }

        vector<int>q(n);
        int r= 1;
        for (auto song : d) {
            q[song.second] =r++;
        }
        for (auto song : l) {
            q[song.second] =r++;
        }
        for (int i=0; i<n; i++) {
            cout <<q[i]<< " ";
        }
        cout<<endl;
    }

}
