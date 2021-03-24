class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        
        
        string s = "";
        
        int n1 = word1.size(),i;
        int n2 = word2.size();
        
        for (i = 0; i < max(n1, n2); i++) {
            if (i < n1) {
                s = s + word1[i];
            }
            if (i < n2) {
                s = s + word2[i];
            }
        }
        
        return s;
    }
};