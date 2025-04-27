class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n =nums.size();
        int ans=0;

        for(int i=0;i<n;i++){
            int a = k-nums[i];

            if(mp.find(a)!=mp.end()){
                mp[a]--;
                if(mp[a]==0) mp.erase(a);
                ans++;
                continue;
            }
            mp[nums[i]]+=1;
        }

        for(auto ele:mp){
            cout<<ele.first<<" ";
        }
        return ans;
    }
};