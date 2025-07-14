class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n =nums.size();
        if(n==0) return 0;
        
        sort(nums.begin(),nums.end());
        int maxSeq =0, seq =1, prev=nums[0];

        for(int i=1;i<n;i++){
            if(prev==nums[i]) continue;
            if(prev+1==nums[i]){
                seq++;
                prev = nums[i];
            }
            else{
                seq=1;
                prev =nums[i];
            }
            maxSeq =max(maxSeq,seq);
        }

        return maxSeq==0?1:maxSeq;
    }
};