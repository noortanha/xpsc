#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,y, z;
    cin >>x>>y>>z;

    double a=x* 1.0 +y* 0.5;
    double b = (4-x-y-z) *1.0 +a;
    double c= z* 1.0 +y* 0.5;

    if (c<b ) {
        cout <<"YES"<< endl;
    }
     else cout <<"NO"<< endl;


}
