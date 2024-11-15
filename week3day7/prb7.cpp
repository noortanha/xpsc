#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int w=0;

         for(int i=0;i<n;i++){
            if(s[i]== 'B')
            {
                w++;
        i=i+k-1;
            }


    }
cout<<w<<endl;
}
}
