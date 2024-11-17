#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        map<int,int>m;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            m[a]++;
        }
        int s=0;
        for(auto [x,y] : m)
        {
            s+=(y/2);
        }
        cout<<s<<endl;
    }

}
