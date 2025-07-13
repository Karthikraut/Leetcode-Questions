class Solution {
public:
    string getHint(string secret, string guess) {
        int n =secret.length();
        unordered_map<char,int> mp;
        int countBull=0,countCow=0;

        for(int i=0;i<n;i++){
            mp[secret[i]]++;
            if(secret[i]==guess[i]){
                mp[secret[i]]--;
                countBull++;
                if(mp[guess[i]]==0) mp.erase(guess[i]);
            }
        }

        for(int i=0;i<n;i++){
            if(secret[i]!= guess[i] && mp.find(guess[i])!=mp.end()){
                countCow++;
                mp[guess[i]]--;
                if(mp[guess[i]]==0) mp.erase(guess[i]);
            }
        }
        string ans = to_string(countBull)+'A'+to_string(countCow)+'B';
        return ans;
    }
};