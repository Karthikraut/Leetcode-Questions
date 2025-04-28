class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        int l = 0, r = 0;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 2; i++) {
            l = i + 1;
            r = n - 1;
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            while (l < r) {
                vector<int> v;
                // Fixed ith point and move l and r pointer
                if (-nums[i] == (nums[l] + nums[r])) {
                    if (r < n - 1 && nums[r] == nums[r + 1]) {
                        r--;
                        continue;
                    }
                    v.push_back(nums[i]);
                    v.push_back(nums[l]);
                    v.push_back(nums[r]);
                    ans.push_back(v);
                    r--;
                } else if (-nums[i] < (nums[l] + nums[r])) {
                    r--;
                } else
                    l++;
            }
        }
        return ans;
    }
};