class Solution {
public:
    string reverseVowels(string s) {
        
        unordered_map <char,int> mp;
        mp['a'] = 0 ;
        mp['e'] = 1;
        mp['i'] = 2;
        mp['o'] = 3;
        mp['u'] = 4;
        mp['A'] = 5;
        mp['E'] = 6;
        mp['I'] = 7;
        mp['O'] = 8;
        mp['U'] = 9;
        
        vector <int> idx;
        
        for(int i = 0;i<s.size();i++){
            
            if(mp.find(s[i])!=mp.end()){
                idx.push_back(i);
            }
            
        }
        
        if(idx.size()==0)
            return s;
        
        int lo = 0;
        int hi = idx.size()-1;
        
        while(lo<hi){
            swap(s[idx[lo++]],s[idx[hi--]]);     
        }
        
 
        return s;
    }
};