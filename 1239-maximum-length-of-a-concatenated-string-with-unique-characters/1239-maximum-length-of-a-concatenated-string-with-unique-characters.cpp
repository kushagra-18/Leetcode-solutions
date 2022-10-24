class Solution {
public:
    int maxx{0};
    
    void f(vector<string>& arr, string res, int idx){
        
        if(!check(res))
            return;
        
      maxx = max(maxx,(int)res.size());
               
        for(int i = idx;i<arr.size();i++){
            f(arr,res+arr[i],i+1);
        }
           
    }
    int maxLength(vector<string>& arr) {
        
        int n = arr.size();
        
        string res = "";
        
        int idx = 0;
        
        f(arr,res,idx);
        
        return maxx;
        
    }
    
    bool check(string str){
        unordered_set<char> s;
        for(auto ch: str){
            s.insert(ch);
        }
        
        return str.size() == s.size();
    }
};