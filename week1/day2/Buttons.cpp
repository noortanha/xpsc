#include <bits/stdc++.h>
using namespace std;
int main(){


int a, b;
cin>>a>>b;
 int op1= a+a-1;
 int op2= b+b-1;
 int op3= a+b;
int m= max(op1, op2);
 int mx= max(m, op3);
 cout<<mx;
    return 0;
}
