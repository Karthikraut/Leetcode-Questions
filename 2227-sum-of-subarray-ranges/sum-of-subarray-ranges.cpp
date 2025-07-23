class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        int n =nums.size();
        long long sum =0;
        for(int i=0;i<n;i++){
            int minEle =INT_MAX, maxEle =INT_MIN;
            for(int j=i;j<n;j++){
                minEle = min(minEle,nums[j]);
                maxEle = max(maxEle,nums[j]);
                sum += maxEle - minEle;
            }
        }
        return sum;
    }
};