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
      int n,m;
      cin>>n>>m;
      if(n>m){
       cout<< "NO"<<endl;
       continue;
      }
      vector<int>a(n+1);
     int sum=0;
     if(n%2==0 && m%2==0){
        cout<< "YES"<<endl;
        for(int i=1;i<=n-2;i++){
            a[i]=1;
            sum++;
        }
        a[n-1]=(m-sum)/2;
        a[n]=a[n-1];
     }
     else if(n%2==1 && m%2==1){
               cout<< "YES"<<endl;
        for(int i=1;i<=n-1;i++){
            a[i]=1;
            sum++;
        }
  a[n]=m-sum;
     }
     else if(n%2==0 && m%2==1){
        cout<< "NO"<<endl;
        continue;
     }
     else if(n%2==1 && m%2==0){
            cout<< "YES"<<endl;
        for(int i=1;i<=n-1;i++){
            a[i]=1;
            sum++;
        }
  a[n]=m-sum;
     }
      for(int i=1;i<=n;i++) cout<< a[i]<< " ";
      cout<<endl;
     }



    return 0;
}
