class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> result;
        if (intervals.empty()) return result;

        sort(intervals.begin(), intervals.end());

        int start = intervals[0][0];
        int end = intervals[0][1];

        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] > end) {
                result.push_back({start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            } else {
                // Overlap
                end = max(end, intervals[i][1]);
            }
        }

        // Add the last interval
        result.push_back({start, end});

        return result;
    }
};
