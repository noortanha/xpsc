#include <bits/stdc++.h>
using namespace std;


int main() {
    int n;
    cin >> n;
    deque<string>dq;
    set<string>s;
    for (int i = 0; i<n; i++) {
        string m;
        cin >>m;

        if (s.find(m) ==s.end()) {
            dq.push_front(m);
            s.insert(m);
        } else {

            dq.erase(find(dq.begin(), dq.end(),m));
           dq.push_front(m);
        }
    }
    for (auto it :dq) {
        cout<<it<<endl;
    }
}

