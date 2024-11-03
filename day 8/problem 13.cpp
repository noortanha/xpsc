#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    map<string, int>s;
    while (n--) {
        string a;
        cin>>a;
        if (s[a] ==0) {
            cout << "NO" <<endl;
            s[a] =1;
        }
        else cout << "YES" <<endl;
    }

}
