#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
        string a,b;
cin>>a>>b;
char s=a.back(),q= b.back();
int cnt1=0,cnt2=0;
for(int i=0;i<a.size();i++){
    if(a[i] == 'X'){
            cnt1++;}

}
for(int i=0;i<b.size();i++){
    if(b[i]== 'X'){
       cnt2++;
    }

}
if (s == q) {
            if (cnt1== cnt2) {
                cout << "=" <<endl;
            }
             else if (s== 'S') {
                if (cnt1>cnt2) cout <<"<" << endl;
                else cout << ">" << endl;
            }
            else if (s=='L') {
                if (cnt1 >cnt2) cout << ">"<< endl;
                else cout <<"<" <<endl;
            }
        }
         else {
            if (s== 'M') {
                if (q == 'S') cout << ">"<< endl;
                else cout << "<" <<endl;
            }
            else if (s=='L') cout<< ">" << endl;
             else if (s== 'S') cout << "<" << endl;

        }
    }

}

