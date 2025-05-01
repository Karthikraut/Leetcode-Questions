class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {

        string a = min(event1[1],event2[1]);
        string b= max(event1[0],event2[0]);
        if(a>=b) return true;
        return false;
    }
};