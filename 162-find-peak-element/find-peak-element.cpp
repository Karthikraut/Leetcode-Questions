class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n =nums.size();
        if(n==1) return 0;
        if(n==2){
            if(nums[1]<nums[0]) return 0;
            else return 1;
        }
        for(int i=1;i<n-1;i++){
            if(nums[i-1]<nums[i] && nums[i]>nums[i+1]){
                return i;
            }
        }
        return (nums[n-1]>nums[n-2]?n-1:0);
    }
};