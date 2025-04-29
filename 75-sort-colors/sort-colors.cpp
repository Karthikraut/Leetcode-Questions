class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int i = 0, j = 0, k = n - 1;
        while (j <=k) {
            cout << i << " " << j << " " << k << endl;
            if (nums[j] == 0) {
                cout << " a ";
                swap(nums[i], nums[j]);
                i++;
                j++;
            } else if (nums[j] == 2) {
                cout << " b ";
                swap(nums[j], nums[k]);
                k--;
            } else {
                cout << "c";
                j++;
            }
        }
    }
};