#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
}
int sum=0,q=0;
bool f= false;
for(int i=0;i<n;i++){
        sum += abs(a[i]);
if(a[i]<=0){
   if(!f){
       f=true;
 q++;
   }

}
else if(a[i]>0) {

    f=false;
}

}
cout<<sum<< " "<<q<<endl;
}
}
