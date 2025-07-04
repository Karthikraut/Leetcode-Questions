class Solution {
public:
    typedef pair<int, int> P;
    vector<int> frequencySort(vector<int>& nums) {
        const auto cmp = [](P a, P b){
            if(a.first != b.first){
                return a.first > b.first;
            }
            return a.second<b.second;
        };

        unordered_map<int, int> mp;
        priority_queue < P, vector<P>, decltype(cmp)> pq;
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