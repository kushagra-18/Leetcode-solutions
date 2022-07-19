class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>arr;
        for(int i=0;i<s.length();i++)
        {
            arr[s[i]]++;
        }
        
        priority_queue<pair<int, char>>pq;
        for(auto i : arr)
        {
            pq.push(make_pair(i.second, i.first));
        }
        
        string tmp;
        while(!pq.empty())
        {
            int t = pq.top().first;
            char ans = pq.top().second;
            while(t--)
                tmp.push_back(ans);
            
            pq.pop();
        }
        
        return tmp;
        
    }
};