class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n =nums.size();
        int i = 0, j = n-1;
        int max_sum =0;
        vector<int> v;
        while (i < j) {
            max_sum = max(nums[i]+nums[j],max_sum);
            i++;
            j--;
        }

        return max_sum;
    }
};