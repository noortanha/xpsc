#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin >>n;
        multiset<int>m;
        for (int i=1;i<=n;i++)
        {
            m.insert(i);
        }
        vector<pair<int,int>>v;
        while (m.size() != 1)
        {
            auto it =m.rbegin();
            int a =*it;
            it++;
            int b = *it;
            v.push_back({a,b});

            m.erase(a);
           m.erase(b);
            int x = (a+b+1) / 2;
            m.insert(x);
        }

        auto it =m.begin();
        cout<<*it<<endl;

        for (auto [x,y] : v)
        {
            cout<<x<< " " <<y<< endl;
        }
    }

}
