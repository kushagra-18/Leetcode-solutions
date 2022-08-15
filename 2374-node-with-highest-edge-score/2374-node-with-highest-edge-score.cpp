class Solution {
public:
    int edgeScore(vector<int>& edges) {
        
        map<int,long long int> mp;
        
        int n = edges.size();
        
        for(int i = 0;i<n;i++){
            
            mp[edges[i]] += i;
            
        }
    
        
        int maxx = INT_MIN; 
        int key;
        
        for(auto &x:mp){
            if(x.second>maxx){
                        
                maxx = x.second;
                key = x.first;
            }
        }
        
        return key;
    }
};