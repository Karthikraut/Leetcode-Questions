class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int r=0, l=0, len=0;
        int n=s.length();
        while(r<n){
            if(mp.find(s[r])!=mp.end() && mp[s[r]]>=l){
                l =  max(mp[s[r]]+1,l);
            }
            mp[s[r]] = r;
            len = max(r-l+1,len);
            r++;
        }
        return len;
    }
};