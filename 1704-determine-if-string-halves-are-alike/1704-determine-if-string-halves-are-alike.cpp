class Solution {
public:
    unordered_set <int> st;
    
    void addVov(unordered_set<int>&st){
        
        st.insert('a');
         st.insert('e');
        st.insert('i');
        st.insert('o');
        st.insert('u');
        st.insert('A');
        st.insert('E');
        st.insert('I');
        st.insert('O');
        st.insert('U');
        
    }
    bool halvesAreAlike(string s) {
        
        int n = s.size();
        
        addVov(st);
        
        int i = 0;
        int j = n-1;
        
        int l = 0;
        int r = 0;
        
        while(i<j){
            
            if(st.count(s[i++]))
                l++;
            if(st.count(s[j--]))
                r++;
            
        }
        
        // cout<<l<<r;
        
        return (l==r);
        
    }
};