class Solution {
public:
    bool isValid(string word) {
        int isVowel=0, isCons =0;
        int n =word.length();
        for(int i=0;i<n;i++){
            if(!isalnum(word[i])) return false;
            word[i] = tolower(word[i]);
            if(word[i]=='a' || word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'){
                isVowel +=1;
            }
            else if(isalpha(word[i])){
                isCons +=1;
            }
        }
        return isVowel>=1 && isCons>=1 && n>=3;
    }
};