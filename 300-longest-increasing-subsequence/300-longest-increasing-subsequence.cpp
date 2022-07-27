class Solution
{
    public:
        int lowerBound(vector<int> arr, int X)
        {
            int mid;
            
            int N = arr.size();

            int low = 0;
            int high = N;

            while (low < high)
            {
                mid = (low + high)>>1;

                if (X <= arr[mid])
                {
                    high = mid;
                }
                else
                {
                    low = mid + 1;
                }
            }

            return low;
        }
    int lengthOfLIS(vector<int> &nums)
    {

        int n = nums.size();
        vector<int> temp;

        temp.push_back(nums[0]);

        for (int i = 1; i < n; i++)
        {

            if (nums[i] > temp.back())
                temp.push_back(nums[i]);
            else
            {
                // auto idx = lower_bound(temp.begin(), temp.end(), nums[i]) - temp.begin();

                auto idx = lowerBound(temp,nums[i]);
                temp[idx] = nums[i];
            }
        }

        return temp.size();
    }
};