class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxEle = -1;
        for(int i=0; i<nums.size(); i++){
            int sum =0;
            int n =nums[i];
            while(n!=0){
                sum+=n%10;
                n = n/10;
            }
            if(mp.find(sum) != mp.end()){
                maxEle = max(maxEle,mp[sum] +nums[i]);
                if(mp[sum]<nums[i]){
                    mp[sum] =nums[i];
                }
            }
            else mp[sum]=nums[i];
        }
        return maxEle;
    }
};