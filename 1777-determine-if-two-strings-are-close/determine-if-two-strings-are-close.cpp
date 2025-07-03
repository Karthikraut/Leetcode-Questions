class Solution {
public:
    bool closeStrings(string word1, string word2) {
        int m =word1.length(), n=word2.length();
        if(m!=n) return false;
        
        vector<int> freq1(26,0),freq2(26,0);
        for(int i=0;i<m;i++){
            freq1[word1[i]-'a'] +=1;
            freq2[word2[i]-'a'] +=1;
        }
        for(int i=0;i<26;i++){
            if(freq1[i]==0 && freq2[i]!=0) return false;
            if(freq1[i] !=0 && freq2[i] ==0 ) return false;
        }
        sort(freq1.begin(),freq1.end());
        sort(freq2.begin(),freq2.end());
        return freq1==freq2;
    }
};