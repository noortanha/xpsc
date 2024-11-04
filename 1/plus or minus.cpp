#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >>t;
    while(t--){
      int n;
      cin>>n;
      string s;
      cin>>s;
        if (n != 5) {
            cout << "NO" << endl;
            continue;
        }
        int cntT = 0, cnti=0, cntm = 0, cntu = 0, cntr = 0;

        for (char ch : s) {
            if (ch == 'T') cntT++;
            else if (ch == 'i') cnti++;
            else if (ch == 'm') cntm++;
            else if (ch == 'u') cntu++;
            else if (ch == 'r') cntr++;
        }
        if (cntT ==1 && cnti ==1 && cntm==1 && cntu==1 && cntr== 1)
            cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    }


