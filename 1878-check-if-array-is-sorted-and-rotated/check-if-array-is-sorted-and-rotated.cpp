class Solution {
public:
    bool check(vector<int>& nums) {
        int anamolity =0;
        int n= nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]) anamolity+=1;

        }
        if(anamolity==1 && nums[0]>=nums[n-1]) return true;
        if(anamolity==0) return true;
        return false;
    }
};