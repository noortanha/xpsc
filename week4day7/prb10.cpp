class Solution {
  public:
    int longestKSubstr(string &s, int k) {
       map<char,int>mp;
       int i=0,j=0,ans=0,u=0;
       while(j<s.length()){
           while(j<s.length()){
               if((mp[s[j]]==0)) u++;
               mp[s[j]]++;
               if(u>k) break;
               j++;
           }
           if(u>=k) ans= max(ans, j-i);
           if(i==s.size()) break;
           while(i<s.size()){
               if(mp[s[i]]==1) u--;
               mp[s[i]]--;
               if(u==k) break;
               i++;
           }
           i++;
           j++;
       }
       return ans;
    }
};
