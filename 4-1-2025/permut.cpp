#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, b, ans = 0;
        cin >> n;

        for (long long i = 1; i <= n; i++) {
            cin >> b;
            long long dif = abs(b - i);

            if (dif!= 0) {
                if (ans == 0) {
                    ans = dif;
                } else {
                    long long a = ans, c = dif;
                    while (c != 0) {
                        long long temp = c;
                        c = a % c;
                        a = temp;
                    }
                    ans = a;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}
