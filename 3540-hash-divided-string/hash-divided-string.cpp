class Solution {
public:
    string stringHash(string s, int k) {
        int n =s.length();
        int i =0;
        string ans ="";
        while(i<n){
            string temp = s.substr(i,k);
            int val =0;
            for(int j=0;j<temp.length();j++){
                val += temp[j]-'a';
            }

            ans += (char)(val%26+'a');
            i+=k;
        }
        return ans;
    }
};