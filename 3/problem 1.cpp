#include <bits/stdc++.h>
using namespace std;
int main()
{
     ios::sync_with_stdio(false);
   cin.tie(nullptr);
    int n;
    cin >>n;
    multiset<int>ml;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        ml.insert(x);
    }
    int ans=0,p=1;
    while(!ml.empty()){
        auto it= ml.lower_bound(p);
        if(it != ml.end()){
           ans++;
        ml.erase(it);
        }
        else break;
         p++;
    }
  cout<<ans<<endl;

}
