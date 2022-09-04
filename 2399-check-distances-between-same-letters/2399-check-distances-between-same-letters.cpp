class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        
        unordered_map<char,int> mp;
        
        for(auto i =  0;i<s.size();i++){
            
            char x = s[i];
            
            if(mp.find(x)!=mp.end()){
                
                int idx = mp[x];
                
                int newIdx = i - idx - 1;
                
                cout<<idx<<" "<<i<<endl;
                
                int alpha = x-97;
                
                if(distance[alpha]!=newIdx)
                    return false;
            }else{
                
                mp.insert({x,i});
                
            }
            
            
        }
        
        
        return true;
        
    }
};