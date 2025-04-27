class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        long long n =skill.size();
        long long i=0;
        long long j=n-1, ans=0;
        unordered_set<long long> st;
        while(i<j){
            ans+= skill[i]*skill[j];
            st.insert(skill[i]+skill[j]);
            i++;
            j--;
        }
     
        return st.size()==1 ?ans:-1;
    }
};