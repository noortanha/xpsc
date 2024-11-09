#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
           int n, m,q;
   cin>>n>>m>>q;
   vector<int>v(m);

   for(int i=0; i<m;i++){
    cin>>v[i];
   }
   sort(v.begin(), v.end());
   while(q--){
    int d;
    cin>>d;
    if(d< v[0]) {
            cout<< v[0]-1<<endl;
    continue;
    }
    if(d>v[m-1]){
        cout<<n-v[m-1]<<endl;
        continue;
    }
    auto it= lower_bound(v.begin(), v.end(),d);
    auto j= it;
    j--;
    int left = *j, right = *it;
    int mid= (left+right)/2;
    cout<<min(abs(mid-left), abs(mid-right))<< endl;
   }
    }


}
