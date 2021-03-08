class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        
        int n = s.size();
        int i;
        
        string sN = s;
        
       for (int i = 0; i < n; i++)
        {
            sN[indices[i]] = s[i];
        }
     
        return sN;
 
    }
};