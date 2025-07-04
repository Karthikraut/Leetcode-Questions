class Solution {
public:
    int possibleStringCount(string word) {
        int n =word.length();
        int len =1, ans =0;
        for(int i=1;i<n;i++){
            if(word[i]==word[i-1]){
                len++;
            }
            else{
                ans += len-1;
                len =1;
            }
            if(i==n-1) ans+=len-1;
        }
        return ans+1;
    }
};