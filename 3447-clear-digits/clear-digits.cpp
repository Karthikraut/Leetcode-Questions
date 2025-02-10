class Solution {
public:
    string clearDigits(string s) {
        string ans ="";
        int n=s.length();
        int count=0;
        for(int i=n-1;i>=0;i--){
            if((int)s[i]>=48 && (int)s[i]<=58) count++;
          
            else if(count==0){ ans = s[i]+ans;}
            else count--;
        }
        return ans;
    }
};