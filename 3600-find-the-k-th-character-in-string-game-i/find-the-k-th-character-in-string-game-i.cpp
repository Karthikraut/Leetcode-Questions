class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";
        while (word.length() < k) {
            string temp = "";
            for (int j = 0; j < word.length(); j++) {
                if (word[j] == 'z')
                    temp += 'a';
                else
                    temp += char(word[j] + 1);
            }
            word += temp;
        }

        return word[k - 1];
    }
};