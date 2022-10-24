class Solution {
public:
    int maxx{0};
    
    void f(vector<string>& arr, string res, int idx){
        
        if(!check(res))
            return;
        
      if(res.size() > maxx) maxx = res.size();
               
        for(int i = idx;i<arr.size();i++){
            // res += arr[i];
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
    
    bool check(string word){

        set<char> st;
        
        for (auto &x : word) {
            if (st.find(x) != st.end()) return false;
            st.insert(x);
        }
        return true;
    
    }
};