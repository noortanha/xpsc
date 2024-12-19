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
     string s;
     cin>>s;
     sort(s.begin(), s.end());
     vector<pair<int,char>>v(26);
     for(int i=0;i<26;i++){
        v[i].second= 'a'+i;
     }
 for(char c:s){
        int k=c- 'a';
    v[k].first++;
 }
 sort(v.rbegin(), v.rend());
 int idx=0;
string result;
result.assign(n, ' ');

 for(auto [cnt,ch] :v){
    if(cnt==0) break;
    for(int i=0;i<cnt;i++){
        if(idx >=n) idx=1;
        result[idx]=ch;
        idx +=2;
    }
 }
 cout<<result<<endl;
    }
cout<<endl;

    return 0;
}
