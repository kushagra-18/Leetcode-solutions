class Solution
{
    public:
        vector<int> topKFrequent(vector<int> &nums, int k)
        {

            unordered_map<int, int> mp;

            priority_queue<pair<int, int>, vector< pair<int, int>>, greater<pair<int, int>>> pq;

            vector<int> res;
            for (auto &x: nums)
            {

                mp[x]++;
            }

           	//         now push {frq,val} in pq, if size of pq exceed k, pop the minimum till now

            for (auto &x: mp)
            {

                pq.push({ x.second,
                    x.first });

                if (pq.size() > k)
                    pq.pop();
            }

           	//         adding in vector

            while (!pq.empty())
            {

                res.push_back(pq.top().second);
                pq.pop();
            }

            return res;
        }
};