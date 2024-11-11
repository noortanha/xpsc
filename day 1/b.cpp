#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
           int n;
   cin>>n;
   vector<int>v(n);

   for(int i=0; i<n;i++){
    cin>>v[i];
   }
   sort(v.begin(), v.end());
  int x= v[n-1]-v[2];
int y=v[n-2]-v[1];
int z=v[n-3]-v[0];
int ans= min(x,min(y,z));
    cout<<ans<<endl;;

   }


    }



