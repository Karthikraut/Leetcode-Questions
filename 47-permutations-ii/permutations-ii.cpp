class Solution {
public:
    void helper(int i,int n,vector<int>& nums,vector<vector<int>> & ans){
        if(i>=n){
            ans.push_back(nums);
            return;
        }
        unordered_set<int> seen;
        for(int j=i;j<n;j++){
                if(seen.find(nums[j])!=seen.end()) continue;
                seen.insert(nums[j]);
                swap(nums[i],nums[j]);
                helper(i+1,n,nums,ans);
                
                swap(nums[j],nums[i]);
        
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> ans;
        helper(0,nums.size(),nums,ans);
        return ans;
    }
};