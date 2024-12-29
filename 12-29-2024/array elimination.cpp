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
        vector<int> a(n), v(30, 0);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        for (int i = 0; i < 30; i++) {
            int num = (1LL << i);
            for (int j = 0; j < n; j++) {
                if ((a[j] & num) != 0) {
                    v[i]++;
                }
            }
        }

        for (int k = 1; k <= n; k++) {
            bool valid = true;
            for (int i = 0; i < 30; i++) {
                if (v[i] % k != 0) {
                    valid = false;
                    break;
                }
            }
            if (valid) {
                cout << k << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
