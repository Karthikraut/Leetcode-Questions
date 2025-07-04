class Solution {
public:
    typedef pair<int, int> P;
    struct cmp {
        bool operator()(P p1, P p2) {
            if (p1.first != p2.first) {
                return p1.first > p2.first;
            } 
            return  p1.second < p2.second;
        }
    };
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int, int> mp;
        priority_queue < P, vector<P>, cmp> pq;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }

        for (auto ele : mp) {
            pq.push({ele.second, ele.first});
        }
        vector<int> ans;
        while (!pq.empty()) {
            P ele = pq.top();
            int f = ele.first;
            while (f--) {
                ans.push_back(ele.second);
            }
            pq.pop();
        }
        return ans;
    }
};