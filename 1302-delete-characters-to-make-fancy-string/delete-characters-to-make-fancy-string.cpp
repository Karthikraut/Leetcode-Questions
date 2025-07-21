class Solution {
public:
    string makeFancyString(string s) {
        int n =s.length();
        int i =0;
        string ans ="";

        while(i<n){
            if(i<n-2 && s[i]==s[i+1] && s[i+1]==s[i+2]){
                ans +=  s[i];
                ans += s[i];
                i = i+2;
                while(i<n-1 && s[i]==s[i+1]){
                    i++;
                }
            }   
            else ans += s[i];
            i++;
        }
        return ans;
    }
};