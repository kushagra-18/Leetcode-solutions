class Solution {
public:
    
    string helper(string a){
        
        stack<char> st;
        
        for(auto &x:a){
            
            if(x!='#')
                st.push(x);
            else if(!st.empty())
                st.pop();
            
        }
        
//         creating string
        
        string temp;
        
        while(!st.empty()){
            
            temp.push_back(st.top());
            st.pop();
            
        }
        
        return temp;
    }
    
    bool backspaceCompare(string s, string t) {
        
        if(s == "" && t == "")
            return true;
        
        return helper(s)==helper(t);
        
    }
};