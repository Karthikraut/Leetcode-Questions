class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n =nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int ans=0;
        for(auto ele:mp){
            int a = ele.first;
            int c1 =ele.second;
            int b =a+1;
            if(mp.find(b) != mp.end()){
                ans = max(c1+mp[b],ans);
            }
        }
        return ans;
    }
};