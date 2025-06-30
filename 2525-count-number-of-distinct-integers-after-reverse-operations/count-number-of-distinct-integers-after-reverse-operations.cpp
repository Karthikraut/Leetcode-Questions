class Solution {
public:
    int reverse(int n){
        int ans=0;
        while(n!=0){
            ans *=10;
            int a = n%10;
            ans += a;
            n /=10;
        }
        return ans;
    }
    int countDistinctIntegers(vector<int>& nums) {
        int n =nums.size();
        for(int i=0;i<n;i++){
            nums.push_back(reverse(nums[i]));
        }
        unordered_set<int> st;
        for(int ele:nums){
            st.insert(ele);
        }
        return st.size();
    }
};