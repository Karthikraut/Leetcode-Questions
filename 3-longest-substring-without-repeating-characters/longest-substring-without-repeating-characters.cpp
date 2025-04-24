class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int n =s.length();
        int i=0;
        int j=0;
        int maxlen=0;
        while(j<n){
            if(mp.find(s[j])!=mp.end() && mp[s[j]]>=i){
               i = mp[s[j]]+1;
            }
            mp[s[j]]=j;
            maxlen =max(maxlen,j-i+1);
            j++;
        }
       return maxlen;
    }
};