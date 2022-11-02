class Solution {
public:
    int findFinalValue(vector<int>& nums, int o) {
        
        unordered_set<int> st;
        
        for(auto &x:nums){
            
            st.insert(x);
            
        }
        
        cout<<st.count(5);
        
        while(st.count(o)){
            if(st.count(o))
                o = o*2;
            
        }
        
            
        return o;
    }
};