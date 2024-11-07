#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>s(n);
        for (int i =0; i<n;i++) {
            cin >>s[i];
        }

        multiset<int>ml;
        long long p= 0;

        for (int i=0; i <n;i++) {
            if (s[i]>0) {
                ml.insert(s[i]);
            }
             else {
                if (!ml.empty()) {

                     auto mx =ml.rbegin();
                   p += *mx;
                    ml.erase(--ml.end());
                }
            }
        }

        cout<<p<< endl;
    }

}
