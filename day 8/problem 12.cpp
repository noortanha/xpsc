#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >>t;
    while (t--) {
        int n;
        string b;
        cin >>n>>b;

        vector<char>v;
        for (char c : b) {
            if (find(v.begin(), v.end(), c) == v.end()) {
                v.push_back(c);
            }
        }
        sort(v.begin(), v.end());
        string s;
        int len = v.size();
        for (char c : b) {
            int idx = find(v.begin(), v.end(), c) - v.begin();
            s += v[len-idx-1];
        }
        cout <<s<< endl;
    }
    
 
}
