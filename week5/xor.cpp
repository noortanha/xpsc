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
        string s;
        cin >> s;
        int n = s.size();

        vector<pair<char, int>> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back({s[i], i + 1});
        }

        char l = s[0], r = s[n - 1];

        if (l <= r)
        {
            sort(v.begin(), v.end());
        }
        else
        {
            sort(v.begin()+1, v.end()-1, greater<>());
        }

        vector<int> path;
        for (const auto &[x, y] : v)
        {
            if (x >= min(l, r) && x <= max(l, r))
            {
                path.push_back(y);
            }
        }

        int cost = abs(int(l - r));
        cout << cost << " " << path.size() << endl;
        for (int val : path)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
