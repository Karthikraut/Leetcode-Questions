class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0;
        int j=0;
        int minLength =INT_MAX,sum=0;
        int n =nums.size();
        while(j<n){
            sum  =sum+ nums[j];
            if(sum>=target){
                cout<<i<<" "<<j<<" ";
                while( i<=j && sum>=target){
                    minLength = min(minLength,j-i+1);
                    sum=sum-nums[i];
                    i++;
                }    
            }
            j++;
        }
        return minLength==INT_MAX? 0:minLength;
    }
};