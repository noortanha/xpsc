#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;

    while (t--) {
            int n;
    cin>>n;
            string s;
    cin>>s;
    int cnt0=0, cnt1=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0') cnt0++;
        else cnt1++;

    }
    int mn = min(cnt0,cnt1);
    if(mn%2==0) cout<<"Ramos" <<endl;
    else cout<<"Zlatan" <<endl;
    }
}
