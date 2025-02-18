class Solution {
public:
    bool judgeSquareSum(int c) {
        unordered_set<long long> st;
        for(long long i=0;i*i<=c;i++){
            st.insert(i*i);
            if(st.find(c-i*i)!=st.end()) return true;
        }
        return false;
    }
};