class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> alph(26,0);
        for(int i=0;i<s.length();i++){
            if(alph[s[i]-'a']==1) return s[i];
            alph[s[i]-'a']++;
        }
         return 'a';
    }
};