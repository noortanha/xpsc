#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >>t;
    while (t--) {
        int n,k,q;
        cin >> n>>k>>q;

        vector<int>a(n);
        for (int i=0; i<n; i++) {
            cin>>a[i];
        }
        long long ans = 0;
        int ln= 0;

        for (int i =0; i<n; i++) {
            if (a[i]<= q) {
                ln++;
            }
          else {

                if (ln >= k) {
                    long long s= (ln-k+1);
                    ans += (s*(s+1))/2;
                }
              ln= 0;
            }
        }

        if (ln>= k) {
            long long s= (ln- k + 1);
            ans +=(s* (s+1))/2;
        }

        cout <<ans<<endl;
    }

}
