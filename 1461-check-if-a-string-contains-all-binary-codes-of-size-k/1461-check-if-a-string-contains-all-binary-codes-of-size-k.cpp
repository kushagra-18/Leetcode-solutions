class Solution {
public:
    bool hasAllCodes(string s, int k) {
        
        if(s.size()<k)
            return false;
        
        unordered_set<string>st;
        
        for(int i = 0;i<=s.size()-k;i++){
            
            string t = s.substr(i,k);
            st.insert(t);
        }
        
        
        return (st.size()==pow(2,k));
    }
};