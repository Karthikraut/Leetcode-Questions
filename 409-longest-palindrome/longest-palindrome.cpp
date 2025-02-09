class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> mp;
        int n =s.length();
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        int countOdd =0,ans=0;
        for(auto ele:mp){
            if(ele.second==1){ 
                countOdd++;
            }
            if(ele.second%2==0) ans +=ele.second;
            if(ele.second%2!=0 && ele.second!=1){
                ans+=ele.second-1;
                if(countOdd==0) countOdd++;
            }

        }
        if(countOdd>0) ans+=1;
        return ans;
    }
};