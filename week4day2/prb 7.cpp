#include <bits/stdc++.h>
using namespace std;

int main() {
int q;
    cin>>q;
    while(q--){
      int n;
    cin>>n;
  string t;
  cin>>t;
   string r= "";
int i=n-1;

while (i >= 0) {
            if (t[i]=='0') {

                int num =(t[i -2]-'0')*10+(t[i-1]-'0');
                r += char('a'+num -1);
                i -=3;
            }
             else {
                int num = t[i]-'0';
                r += char('a'+num-1);
                i--;
            }
        }

        reverse(r.begin(), r.end());
        cout << r<< endl;
    }

}
