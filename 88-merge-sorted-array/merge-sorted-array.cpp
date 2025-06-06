class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a = nums1.size();
        int i = m - 1, j = n - 1, k = a - 1;
        while (k>=0) {
            if (i>=0 && j>=0 && nums1[i] < nums2[j]) {
                nums1[k] = nums2[j];
                j--;
            } else if(i>=0) {
                nums1[k] = nums1[i];
                i--;
            }
            else if(j>=0){
                nums1[k]=nums2[j];
                j--;
            }
            k--;
        }
    }
};