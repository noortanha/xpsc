class Solution {
  public:
    int lenOfLongestSubarr(vector<int>& arr, int k) {
        map<int,int>mp;
        mp[0]=-1;
        int s=0,ans=0;
        for(int i=0;i<arr.size();i++){
            s=s+arr[i];
            if(mp.find(s)==mp.end()){
                mp[s]=i;
            }
            if(mp.find(s-k)!=mp.end() ){
                ans=max(ans,i-mp[s-k]);
            }
        }
        return ans;
    }
};
