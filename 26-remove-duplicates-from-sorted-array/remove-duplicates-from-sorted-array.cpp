class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        stack<int> st;
        int n =nums.size();
        st.push(nums[0]);
        int count=1;
        for(int i=1;i<n;i++){
            if(st.top()==nums[i]){
                continue;
            }
            else{ 
                count+=1;
                st.push(nums[i]);
            }
        }
        int sz =count;
        while(!st.empty()){
            nums[count-1] =st.top();
            st.pop();
            count--;
        }
        return sz;
    }
};