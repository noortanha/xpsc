#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < q; i++)
    {
        int key, l = 0, r = n - 1,x;
        cin >> key;
        bool f= false;
        while (l <= r)
        {
           x = (l + r) / 2;
            if (key == a[x])
            {
                f= true;
                break;
            }
            else if (key < a[x])
            {
                r =x - 1;
            }
            else
                l = x+ 1;
        }
        if (f)
        {
            cout << "YES" <<endl;
        }
        else
        {
            cout << "NO" <<endl;
        }
    }
    return 0;
}
