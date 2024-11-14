#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<long long>v;
    long long total=0;
    int mn=0;
    for(int i=0;i<n;i++){
       long long l=i, r=n-i-1;
        if(s[i]== 'L'){
            if(r>l){
                mn++;
                total+=r;
                v.push_back(r-l);
            }
            else total +=l;
        }
        else {
            if(l>r){
                mn++;
                v.push_back(l-r);
                total +=l;
            }
            else total +=r;
        }


    }
    vector<long long>ans(n+1);
    for(int i=mn;i<=n;i++) ans[i]=total;
    sort(v.begin(),v.end(),greater<int>());
    for(int i=mn-1;i>=1;i--){
        total -=v.back();
        v.pop_back();
        ans[i]=total;
    }
    for(int i=1;i<=n;i++){
        cout<<ans[i]<< " ";
    }
    cout<<endl;

}
}
