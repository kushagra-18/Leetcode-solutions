class Solution {
public:
    string greatestLetter(string s) {
        
        set<char> st;
        
        string res;
        
        for(auto x:s){

            int w = x;
            
            if(st.find(x+32)!=st.end() ||st.find(x-32)!=st.end())
                res.push_back(toupper(x));
        
            st.insert(w);
        }
        
        if(res=="")
            return "";
        
        sort(res.begin(),res.end());
        
        cout<<res;
        
        res = toupper(res.back());
        
        return res;
    }
};