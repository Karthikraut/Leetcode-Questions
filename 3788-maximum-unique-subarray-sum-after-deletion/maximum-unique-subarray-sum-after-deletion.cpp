class Solution {
public:
    int maxSum(vector<int>& nums) {
        int ans =0;
        int n =nums.size();
        unordered_set<int> st;
       
        for(int i=0;i<n;i++){
            if(nums[i]>0){
                st.insert(nums[i]);
            }
        }

        if(st.empty()){
            ans =-110;
            for(int i=0;i<n;i++){
                ans = max(ans,nums[i]);
            }
            cout<<ans;
            return ans;
        }
        
        for(auto ele: st){
            ans += ele;
        }
        return ans;
    }
};