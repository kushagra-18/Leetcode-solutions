class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        
        unordered_map<int, int>arr;
        
        for(int i=0;i<nums.size();i++)
        {
            arr[nums[i]]++;
        }
        
        priority_queue<pair<int, int>>pq;
        
        for(auto i : arr)
        {
            pq.push({i.second*(-1), i.first});
        }
        
        vector<int> res;
        
        while(!pq.empty())
        {
            int t = pq.top().first;
            t = -t;
            int ans = pq.top().second;
            while(t--)
                res.push_back(ans);
            
            pq.pop();
        }
        
        return res;
           
    }
};