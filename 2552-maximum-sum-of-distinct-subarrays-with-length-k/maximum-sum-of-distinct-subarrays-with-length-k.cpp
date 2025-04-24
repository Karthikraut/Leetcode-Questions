class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<long long,long long> mp;
        long long val=0;
        long long max_val =-1;
        for(long long i=0;i<k;i++){
            val=val+nums[i];
            mp[nums[i]] +=1;
        }

        if(mp.size()==k) max_val = val;
        long long i=0;
        long long j=k-1;
        while(j<nums.size()-1){
            mp[nums[i]]-=1;
            if(mp[nums[i]]==0) mp.erase(nums[i]);

            val=val-nums[i];
            i++;
            j++;
            mp[nums[j]]+=1;
            val=val+nums[j];
            cout<<i<<" "<<j<<"      ";
            cout<<mp.size()<<" "<<k<<endl;
            if(mp.size()==k) max_val =max(max_val,val);
        }
        return max_val==-1?0:max_val;

    }
};