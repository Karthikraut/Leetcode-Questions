class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> pse(n, -1), nse(n, n);
        stack<int> st;
        
        // Compute Next Smaller Element (nse)
        st.push(n - 1);
        for (int i = n - 2; i >= 0; i--) {
            while (!st.empty() && arr[st.top()] >= arr[i]) { // Change > to >=
                st.pop();
            }
            if (!st.empty()) nse[i] = st.top();
            st.push(i);
        }
        
        // Compute Previous Smaller Element (pse)
        while (!st.empty()) st.pop();
        st.push(0);
        for (int i = 1; i < n; i++) {
            while (!st.empty() && arr[st.top()] > arr[i]) { // Keep > here
                st.pop();
            }
            if (!st.empty()) pse[i] = st.top();
            st.push(i);
        }
        
        // Calculate sum of minimums
        long ans = 0;
        long mod = 1e9 + 7;
        for (int i = 0; i < n; i++) {
            long left = i - pse[i];
            long right = nse[i] - i;
            long contribution = (arr[i] * left) % mod; // Prevent overflow
            contribution = (contribution * right) % mod;
            ans = (ans + contribution) % mod;
        }
        
        return ans;
    }
};