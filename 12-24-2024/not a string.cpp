#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = s.length();

        string t1(n, '(');
        t1 += string(n, ')');
        string t2;
        for (int i = 0; i < n; i++) {
            t2 += "()";
        }

        bool f1= false;
        for (int i = 0; i <=t1.size() - n; i++) {
            if (t1.substr(i, n) == s) {
                f1 = true;
                break;
            }
        }

        bool f2 = false;
        for (int i = 0; i <=t2.size() - n; i++) {
            if (t2.substr(i, n) == s) {
                f2 = true;
                break;
            }
        }

        if (!f1) {
            cout << "YES\n" << t1 << '\n';
        } else if (!f2) {
            cout << "YES\n" << t2 << '\n';
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
