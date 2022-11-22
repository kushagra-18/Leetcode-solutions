class Solution
{
    public:
        vector<int> twoSum(vector<int> &nums, int target)
        {

            vector<int> res;

            unordered_map<int, int> mp;

            int n = nums.size();

            for (int i = 0; i < n; i++)
            {

                auto x = target - nums[i];

                if (mp.find(x) != mp.end())
                {

                    res.push_back(i);
                    res.push_back(mp[x]);
                    return res;
                }

                mp[nums[i]] = i;
            }

            return {};
        }
};