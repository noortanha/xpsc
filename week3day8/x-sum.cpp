#include <bits/stdc++.h>
#define ll long long
using namespace std;

void fun(){

ll n, m, i, j, k;
 cin>>n>>m;
int a[n][m];
 for (int i=0;i<n; i++) {
        for(j=0;j<m;j++){
          cin>>a[i][j];
        }
 }

ll ans=0, sum=0, x ,y;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        sum =a[i][j], x=j-1, y= j+1;
        for(k=i-1; k>=0;k--){
            if(x>=0){
                sum+=a[k][x];
                x--;
            }
            if(y<m){
                sum +=a[k][y];
                y++;
            }
        }
         x=j-1, y= j+1;
         for(k=i+1; k<n;k++){
            if(x>=0){
                sum+=a[k][x];
                x--;
            }
            if(y<m){
                sum +=a[k][y];
                y++;
            }
        }
  if(sum>ans) ans =sum;
    }
}
cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        fun();
    }
}
