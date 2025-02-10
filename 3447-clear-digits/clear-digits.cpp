class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        st.push(s[0]);
        int n =s.length();
        for(int i=1;i<n;i++){
            if(isdigit(s[i])){
                st.pop();
            }
            else st.push(s[i]);
        }

        string ans ="";
        while(!st.empty()){
            ans = st.top() +ans;
            st.pop();
        }
        return ans;
    }
};