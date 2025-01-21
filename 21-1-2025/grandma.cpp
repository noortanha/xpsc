 #include<bits/stdc++.h>
using namespace std;

int main()
{

      int t;
    cin>>t;
    while(t--)
    {
int n;
string s;
        cin>>n>>s;
     int ans= INT_MAX;

     for(int i=0;i<26;i++)
     {
char c= 'a' +i;
int l=0, r=n-1;
int p=0,f=0;
while(l<r)
{
    if(s[l] != s[r]){
        if(s[l] ==c)
    {
        l++,p++;

    }
    else if(s[r]==c)
    {
        r--,p++;
    }
    else
    {
        f=l;
        break;
    }
    }
   else{
    l++,r--;
   }
}
 if(f!=l) ans=min(ans,p);
            }

 if(ans==INT_MAX) cout<<-1<<endl;
 else cout<< ans<<endl;
}
}
