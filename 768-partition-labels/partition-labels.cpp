class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n =s.length();
        unordered_map<char,int> mp;
        for(int i=n-1;i>=0;i--){
            if(mp.find(s[i])==mp.end()){
                mp[s[i]] = i;
            }
        }
        vector<int> ans;
        int idx = 0,j=0;
        for(int i=0;i<n;i++){
            if(idx<mp[s[i]] || idx==-1){
                if(idx==-1){
                    j =i;
                }
                idx= mp[s[i]];
            }
            if(idx == i){
                ans.push_back(i+1-j);
                idx=-1;
            }
        }
        return ans;
    }
};