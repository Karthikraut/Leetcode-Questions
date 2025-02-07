class Solution {
public:
    int tupleSameProduct(vector<int>& nums) {
        unordered_map<int,int> mp;
        int n =nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int mult =nums[i]*nums[j];
                mp[mult]++;
            }
        }
        int ans=0;
        for(auto ele:mp){
            int k =ele.second;
            if(k>=2) ans = ans +(k*(k-1)/2)*8;
        }
        return ans;
    }
};