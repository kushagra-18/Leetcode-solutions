class Solution
{
    public:
        vector<int> findOriginalArray(vector<int> &changed)
        {
            
            if(changed.size()%2!=0)
                return {};

            unordered_map<int, int> mp;
            for (auto &x: changed)
            {
                mp[x]++;
            }

            int n = changed.size();

            sort(changed.begin(), changed.end());

            vector<int> arr;

            for (auto &x: changed)
            {
                
                if(mp[x]==0)
                    continue;
                if(mp[x*2]==0)
                    return {};

                arr.push_back(x);
                mp[x *2]--;
                mp[x]--;
            }

            return arr;
        }
};