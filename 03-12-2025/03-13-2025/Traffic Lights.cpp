#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x, n;
    cin >> x >> n;
    vector<int> a(n);
    for (int i=0; i<n; i++)
    cin >> a[i];
    set<int> s = {0, x};
    multiset<int> m = {x};

    for (int p: a)
    {
        auto it = s.upper_bound(p);
        int r = *it;
        int l = *prev(it);
        m.erase(m.find(r-l));
        m.insert(p-l);
        m.insert(r-p);
        s.insert(p);
        cout << *m.rbegin() << " ";
    }

    cout << endl;
    return 0;
}
