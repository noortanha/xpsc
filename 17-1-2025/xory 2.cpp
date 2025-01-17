#include<bits/stdc++.h>
using namespace std;
int main()
{

       long long  t;
    cin>>t;
    while(t--)
    {
int n;
        cin>>n;
     int a=0;
     int i=31;
     while(i>=0)
     {
         if((n& (1<<i)))
         a++;
             if(a==2)
                break;
         i--;
     }
     int cnt=0;
     while(i>=0)
     {
         if((n& (1 <<i))==0) cnt++;
         i--;
     }
     cout<< (1<<cnt)<<endl;
    }
}
