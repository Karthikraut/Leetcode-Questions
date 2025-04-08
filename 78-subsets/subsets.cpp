class Solution {
public:
    void helper(int start, vector<int> &nums, vector<int> temp,vector<vector<int>> &ans){
        if(temp.size()<=nums.size()){
            ans.push_back(temp);
        }
        for(int i=start;i<nums.size();i++){
            temp.push_back(nums[i]);
            helper(i+1,nums,temp,ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(0,nums,temp,ans);
        return ans;
    }
};