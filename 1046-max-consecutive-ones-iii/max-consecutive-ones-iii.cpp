class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0,right=0,n=nums.size();
        int count_zero =0;
        int max_val =0;
        while(right<n){
            if(nums[right]==0) count_zero++;
            while(count_zero>k){
                if(nums[left]==0) count_zero--;
                left++;
            }
            max_val =max(max_val,right-left+1);
            right++;
        }
        return max_val;
    }
};