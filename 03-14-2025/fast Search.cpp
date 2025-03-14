#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(),a.end());
    int k;
    cin>>k;
    for (int i = 0; i < k; i++)
    {
        int l,r;
        cin>>l>>r;
        auto x = lower_bound(a.begin(),a.end(),l);
        auto y = upper_bound(a.begin(),a.end(),r);

        cout <<y-x <<" ";
    }

    return 0;
}
