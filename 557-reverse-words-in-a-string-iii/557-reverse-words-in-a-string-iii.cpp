class Solution {
public:
    string reverseWords(string s) {
        
        if(!s.size())
            return " ";
        
        string res;
        string temp;
        
        s+=" ";
        bool first = true;
        
        for(int i = 0;i<s.size();i++){
            
            temp.push_back(s[i]);
            
            if(s[i+1] == ' '){
                // cout<<temp;
                reverse(temp.begin(),temp.end());
                res += temp + " ";
                // (first)? res+=" ":NULL;
                temp = "";
                i++;
                // first = false;
                
            }
            
        }
        
        res.pop_back();
        
        return res;
    }
};