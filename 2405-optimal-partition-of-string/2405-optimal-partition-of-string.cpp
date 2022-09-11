class Solution {
public:
    int partitionString(string s) {
        
        int count = 1;
        
        unordered_map<char,int>mp;
        
        for(auto &x:s){
            
            if(mp.find(x)!=mp.end()){
                
                count++;
                mp.clear();
                mp[x]++;
            }else{
                
                mp[x]++;
                
            }
            
        }
        
        return count;
    }
};