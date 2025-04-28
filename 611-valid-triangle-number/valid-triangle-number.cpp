class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int n =nums.size();
        if(n<3) return 0;
        int i=0,j=0;
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int k=2;k<n;k++){
            i=0,j=k-1;
            while(i<j){
                if(nums[i]+nums[j]>nums[k]){
                    ans  =ans + (j-i);
                    j--;
                }
                else i++;
            }
        }
        return ans;
    }
};