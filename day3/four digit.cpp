#include<bits/stdc++.h>
using namespace std;
int main(){

int n;
cin>>n;
int dig[4]= {0};

dig[0]=n/1000;
dig[1]= (n/100)%10;
dig[2]= (n/10)%10;
dig[3]= n%10;
for(int i=0;i<4;i++){
    cout<<dig[i];
}
return 0;
}
