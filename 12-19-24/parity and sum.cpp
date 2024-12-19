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
        int n;
        cin >> n;
      vector<long long > a(n);
     long long oddmx=0,evenmx=0,even =0;
        for(int i=0;i<n;i++){
           cin>>a[i];
           if(a[i]%2==0)
           {
               even++;
               oddmx = max( oddmx,a[i]);
           }
           else evenmx = max(evenmx,a[i]);
        }
        sort(a.begin(),a.end());
                for(int i=0;i<n;i++){
                        if(a[i]%2==0 && a[i]<oddmx) oddmx+=a[i];
                }
        if(oddmx ==0 || evenmx==0) cout<<0<<endl;
        else if(evenmx>oddmx) cout<<even<<endl;
        else cout<<even+1<<endl;


    }


    return 0;
}
