#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        deque<char>d;
        int cnt1=0,cnt2=0;
        string s;
        cin>>s;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]=='B')
            {
                cnt1++;
                continue;
            }
            if(s[i]=='b')
            {
                cnt2++;
                continue;
            }
            if(cnt2 && islower(s[i]))
            {
               cnt2--;
                continue;
            }
            if(cnt1 && isupper(s[i]))
            {
                cnt1--;
                continue;
            }
            d.push_front(s[i]);
        }
        for(auto it:d)
        {
            cout<<it;
        }
        cout<<endl;
    }

}
