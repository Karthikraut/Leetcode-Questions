class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> st;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(st.find(target - nums[i]) != st.end() ){
                return {st[target-nums[i]], i};
            }
            st[nums[i]]  = i;
        }
        return  {};
    }
};