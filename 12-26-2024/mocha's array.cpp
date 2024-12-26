#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n),v;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        v = a;
        sort(v.begin(), v.end());

        bool f = false;
        for (int i = 0; i < n; i++) {
            bool m= true;
            for (int j = 0; j < n; j++) {
                if (a[j] != v[(i + j) % n]) {
                    m= false;
                    break;
                }
            }
            if (m) {
               f = true;
                break;
            }
        }

        if (f)
            cout << "YES"<<endl;
         else
            cout << "NO"<<endl;

    }

    return 0;
}
