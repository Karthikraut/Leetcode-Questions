class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n = nums.size();
        vector<int> ans(n, 0);
        vector<int> sm;
        vector<int> eq;
        vector<int> lg;
        for (int i = 0; i < n; i++) {
            if (nums[i] < pivot) {
                cout << " sm:" << nums[i] << " ";
                sm.push_back(nums[i]);
            }
            if (nums[i] == pivot) {
                cout << " eq:" << nums[i] << " ";
                eq.push_back(nums[i]);
            }
            if (nums[i] > pivot) {
                cout << " lg:" << nums[i] << " ";
                lg.push_back(nums[i]);
            }
        }

        int j = 0;
        for (int i = 0; i < sm.size(); i++) {
            nums[j] = sm[i];
            j++;
        }
        for (int i = 0; i < eq.size(); i++) {
            nums[j] = eq[i];
            j++;
        }
        for (int i = 0; i < lg.size(); i++) {
            nums[j] = lg[i];
            j++;
        }
        return nums;
    }
};