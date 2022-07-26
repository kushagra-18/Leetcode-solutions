class Solution
{
    public:
        vector<int> findAnagrams(string s, string p)
        {

            if (s.size() < p.size())
                return {};

            unordered_map<char, int> smp;

            unordered_map<char, int> pmp;

            vector<int> res;

            for (auto &x: p)
            {

                pmp[x]++;
            }
            

            int left = 0;
            int k = p.size();
            int right = k - 1;
            
             for(int i = 0;i<k;i++)
                 smp[s[i]]++;
            
            while (right < s.size())
            {
                 // for(auto x:smp)
                 //    cout<<x.first<<" "<<x.second<<" ";
                 // cout<<endl;

                if (smp == pmp)
                    res.push_back(left);

                smp[s[left]]--;
                
                //check if value of key is 0, then remove
                if(smp[s[left]]==0){
                    smp.erase(s[left]);
                }

                left++;
                right++;
                if(right!=s.size())
                    smp[s[right]]++;
                
            }

            return res;
        }
};