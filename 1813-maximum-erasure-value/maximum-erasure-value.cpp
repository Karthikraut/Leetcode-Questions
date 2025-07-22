class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n =nums.size();
        unordered_set<int> st;
        int i=0,j=0;
        int ans=0,maxAns=0;
        while(j<n){
            if(st.find(nums[j]) != st.end()){
                while(st.find(nums[j])!=st.end() && i<j){
                    ans -= nums[i];
                    st.erase(nums[i]);
                    i++;
                }
            }
            st.insert(nums[j]);
            ans += nums[j];
            j++;
            maxAns = max(ans,maxAns);
        }
        return maxAns;
    }
};