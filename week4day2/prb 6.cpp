#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >>t;
    while (t--) {
        int a,b,c;
        cin >>a>>b>>c;
 int op1= a-1;
 int op2= abs(b-c)+c-1;
 if(op1==op2) cout<< 3<<endl;
    else if(op1>op2) cout<<2<<endl;
    else cout<<1<<endl;
    }

}
