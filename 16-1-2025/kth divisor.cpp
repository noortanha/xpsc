#include<bits/stdc++.h>
using namespace std;
int main()
{

       long long  t;
    cin>>t;
    while(t--)
    {
int n;
        cin>>n;
     vector<int >v(n);
     for(int  i=0;i<n;i++)
     cin>>v[i];
    int ans=n;
     for(int i=0;i<n;i++)
     {
         int c=i;
     for(int j=i+1;j<n;j++)
     {
         if(v[j]>v[i])c++;
     }
     ans=min(ans,c);
     }
     cout<<ans<<endl;
    }
}
