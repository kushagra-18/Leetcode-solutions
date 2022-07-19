class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        priority_queue<pair<int,char>>maxh;
        for(auto i = m.begin();i!=m.end();i++)
        {
          maxh.push({i->second,i->first});
        }
        s.clear();
        while(!maxh.empty())
        {
            int freq=maxh.top().first;
            int ele=maxh.top().second;
            for(int i=1;i<=freq;i++)
            {
                s.push_back(ele);
            }
            maxh.pop();
        }
        return s;
    }
};
