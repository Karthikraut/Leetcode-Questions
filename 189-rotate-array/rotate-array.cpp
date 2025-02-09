class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n =nums.size();
        deque<int> q;
        for(int i=0;i<n;i++){
            q.push_back(nums[i]);
        }
        while(k--){
            int a =q.back();
            q.pop_back();
            q.push_front(a);
        }
        for(int i=0;i<n;i++){
            nums[i] =q.front();
            q.pop_front();
        }
    }
};