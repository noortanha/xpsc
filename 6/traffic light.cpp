#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
int t;
cin>>t;
while(t--)
{
    long long n;
    cin>>n;
    string x,s;
    cin>>x>>s;
    s +=s;
    if(x[0]=='g'){
        cout<<0<<endl;
        continue;
    }
    int cnt=0, r=0;
    bool flag =false;
    for(int i=0; i<s.size();i++){
            if(flag) cnt++;
      if(s[i]=='g')   {
        r=max(r,cnt);
        flag=false;
      }
    if(s[i]==x[0] && !flag){
        flag=true;
        cnt=0;
    }
    }
    cout<<r<<endl;
}

}
