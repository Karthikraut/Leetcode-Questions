class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        unordered_set<int> st;
        int n =digits.size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(digits[i]==0) continue;
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(digits[k]%2!=0 || (i==j || j==k || i==k)) continue;
                    int num = digits[i]*100 + digits[j]*10 + digits[k];
                    st.insert(num);
                }
            }
        }
        for(int ele: st){
            ans.push_back(ele);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};