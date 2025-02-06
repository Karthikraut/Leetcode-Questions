class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int maxSum = INT_MIN;
        int n= nums.size();
        if(n==1) return nums[0];
        int sum =nums[0];
        for(int i=1;i<n;i++){
            maxSum = max(sum,maxSum);
            if(nums[i-1]<nums[i]){
                sum+=nums[i];
            }
            else{
                sum=nums[i];
            }
            maxSum = max(sum,maxSum);
        }
        return maxSum;
    }
};