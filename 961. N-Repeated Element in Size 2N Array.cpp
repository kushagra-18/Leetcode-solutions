class Solution {
public:
    int repeatedNTimes(vector<int>& A) {
        
        int n = A.size(),res;
        
        map <int,int> mp;
        
        for(auto i: A){
            
            mp[i]++;
        }
        
        
        for(auto i:mp){
            
            if(i.second>=n/2){
                
                res = i.first;
                
                
            }
            
        }
        
        return res;
        
    }
};