class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n =nums.size();
        int i = 0, j = n-1;
        vector<int> v;
        while (i < j) {
            v.push_back(nums[i]+nums[j]);
            i++;
            j--;
        }
        sort(v.begin(),v.end());
        return v[v.size()-1];
    }
};