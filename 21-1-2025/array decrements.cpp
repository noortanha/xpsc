 #include<bits/stdc++.h>
using namespace std;

int main()
{

      int t;
    cin>>t;
    while(t--)
    {
int n;
        cin>>n;
     int diff=-1, zero=-1;
     bool f= false;
     vector<int>a(n), b(n);
     for(int i=0;i<n;i++) cin>>a[i];
     for(int i=0;i<n;i++) cin>>b[i];
     for(int i=0;i<n;i++)
     {

         if(a[i]<b[i])
         {
             f=true;
             break;
         }
         if(b[i]!=0)
         {
            if(diff==-1) diff= a[i]-b[i];
            else{
                if(a[i]-b[i] !=diff)
                {
                    f=true;
                    break;
                }
            }

     }
     else zero= max(zero,a[i]-b[i]);
    }
    if(f)
     {
         cout<<"NO"<<endl;
         continue;
         }

     else if((diff==-1) || zero<=diff)    cout<< "YES"<<endl;
     else cout<<"NO"<<endl;
}
}
