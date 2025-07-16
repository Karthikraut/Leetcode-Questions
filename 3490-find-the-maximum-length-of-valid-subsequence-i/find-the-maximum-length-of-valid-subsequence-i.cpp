class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int count_odd=0, count_even=0, count_both=1;
        int n =nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2==0) count_even++;
            if(nums[i]%2==1) count_odd++;
        }
        bool isPrevEven =nums[0]%2;
        for(int i=1;i<n;i++){
            if(isPrevEven==0 && nums[i]%2==1){
                count_both++;
                isPrevEven =1;
            }
            if(isPrevEven==1 && nums[i]%2==0){
                count_both++;
                isPrevEven =0;
            }
        }
    
        return max({count_odd,count_even,count_both});
    }
};