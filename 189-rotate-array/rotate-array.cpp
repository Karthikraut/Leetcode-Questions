class Solution {
public:
    void reverse(vector<int> &nums,int i,int j){
        if(i>=j) return;
        int temp =nums[i];
        nums[i] =nums[j];
        nums[j] = temp;
        reverse(nums,i+1,j-1);
    }
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==1) return;
        int n =nums.size();
        k =k%n;
        reverse(nums,0,n-k-1);
        reverse(nums,n-k,n-1);
        reverse(nums,0,n-1);
    }
};