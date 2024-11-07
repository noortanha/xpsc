#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>s(n);
        for (int i=0; i<n; i++) {
            cin>>s[i];
        }
        priority_queue<int>pq;
        long long p =0;

        for (int i=0; i<n;i++) {
            if (s[i]>0) pq.push(s[i]);
             else {

                if (!pq.empty()) {
                    p+= pq.top();
                    pq.pop();
                }
            }
        }

        cout<<p<< endl;
    }

}
