class Solution {
public:
    int countMatches(vector<vector<string>> &items, string ruleKey, string ruleValue) {
         int j, count = 0;
        
        if (ruleKey == "type") j = 0;
        else if (ruleKey == "color") j = 1;
        else if (ruleKey == "name") j = 2;
        
        for (int i=0; i<items.size(); i++) {
            if (ruleValue == items[i][j]) count++;
        }
        
        return count;
    }
};
        
