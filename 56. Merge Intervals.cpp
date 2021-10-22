class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        
        vector<vector<int>> res;
        
        if(intervals.size()== 0){
            
            return {};
        }
        
        sort(intervals.begin(),intervals.end());
        
        vector <int> temp = intervals[0];
        
        for(auto x:intervals){
            
            if(x[0] <= temp[1])
                temp[1] = max(temp[1],x[1]);
            else
            {
                res.push_back(temp);
                temp = x;
            }
            
        }
               
        res.push_back(temp);
        
        return res;
    }
};