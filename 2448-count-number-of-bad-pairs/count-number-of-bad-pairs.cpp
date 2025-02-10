class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        long long n=nums.size();
        long long good_pairs =0;
        for(int i=0;i<n;i++){
            if(mp.find(nums[i]-i)!=mp.end()){
                good_pairs+=mp[nums[i]-i];
            }
            mp[nums[i]-i]++;
        }
        long long total_pairs = n *(n-1)/2;
        long long bad_pairs= total_pairs-good_pairs; 
        return bad_pairs;
    }
};