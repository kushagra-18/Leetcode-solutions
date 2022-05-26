class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        
        vector<vector<int>> res;
        int idx = 0;
        int n = intervals.size();
        int minn;
        int maxx;
        
        while(idx<n && newInterval[0]>intervals[idx][1])
            res.push_back(intervals[idx++]);
        
        while(idx<n && newInterval[1] >= intervals[idx][0]){
            
            newInterval[0] = min(intervals[idx][0],newInterval[0]);
            newInterval[1] = max(intervals[idx][1],newInterval[1]);
            idx++;
        }
        
        res.push_back(newInterval);
        
        while(idx<n)
            res.push_back(intervals[idx++]);
        
        
        return res;
            
    }
};