class Solution {
public:
    bool doOverlap(vector<int> last, vector<int> interval) {
        //For Overlapping ondition is Minimum of End Point should be greater than Maximum of Starting point
        int min_of_end_points =min(last[1],interval[1]);
        int max_of_start_points = max(last[0],interval[0]);
        if(min_of_end_points-max_of_start_points>=0) return true;
        return false;
    }

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        sort(intervals.begin(), intervals.end());
        result.push_back(intervals[0]);
        int n = intervals.size();
        for (int i = 1; i < n; i++) {
            vector<int>& last = result.back();
            if (doOverlap(last, intervals[i])) {
                last[0] = min(last[0], intervals[i][0]);
                last[1] = max(last[1], intervals[i][1]);
            } else
                result.push_back(intervals[i]);
        }
        return result;
    }
};