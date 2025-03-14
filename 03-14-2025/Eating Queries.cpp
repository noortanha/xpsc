#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> a(n), p(n + 1);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        for (int i = 1; i <= n; i++)
        {
            p[i] = p[i - 1] + a[i - 1];
        }
        for (int i = 0; i < q; i++)
        {
            int k, ans = -1;
            cin >> k;
            auto it = lower_bound(p.begin(), p.end(), k);
            if (it != p.end())
            {
                ans = it - p.begin();
            }
            cout << ans <<endl;
        }
    }
    return 0;
}
