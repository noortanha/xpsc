#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--){
     int n;
     cin>>n;
  string s,t;
  cin>>s>>t;
        bool flag=true;
     for(int i=0;i<n;i++){

            if((s[i]=='R' && t[i]!='R')  ||(s[i]!='R' && t[i]== 'R')) flag= false;
            }


if(flag) cout<< "YES"<<endl;
else cout<<"NO"<<endl;
}
}
