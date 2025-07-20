class Solution {
public:
    vector<string> stringSequence(string target) {
        int n = target.length();
        vector<string> ans;
        string a = "";
        for (int i = 0; i < n; i++) {
            char b = target[i];
            int j = 0;
            while (j <= (b - 'a')) {
                if (i<a.length()) {
                    a[i] = (char)(j + 'a');
                } else {
                    a += (char)(j + 'a');
                }
                ans.push_back(a);
                j++;
            }
        }
        return ans;
    }
};