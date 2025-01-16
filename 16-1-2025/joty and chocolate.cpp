#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,x,k;
         cin>>n>>x>>k;
        string s;
       cin>>s;

     long long a = 0, y = 0;
        for (int i=n-1;i>=0;i--)
        {
            if (s[i] == '0')
            {
                a++;
            }
            else
            {
               y += a;
            }
        }

        if(y<=x &&  y%k==0)
            cout<< 1 <<endl;
        else
            cout<< 2 <<endl;
    }
    return 0;
}
