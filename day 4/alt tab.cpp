#include <bits/stdc++.h>
using namespace std;

int main() {

        int n;
        cin>>n;
        stack<string >s;
        for(int i=0;i<n;i++){
            string c;
            cin>>c;
            s.push(c);
        }
        set<string>ans;
        while(!s.empty()){
             if(ans.find(s.top()) == ans.end()){
                ans.insert(s.top());
                string tmp =s.top();
                if(tmp.size()>2) cout<<tmp.substr(tmp.size()-2);

            }
 s.pop();
        }

	}


