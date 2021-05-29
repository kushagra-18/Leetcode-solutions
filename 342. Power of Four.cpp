class Solution {
public:
    bool isPowerOfFour(int n) {
        
        if(n<=0){
            
            return false;
        }
        
        bool res = floor(log(n)/log(4)) == ceil(log(n)/log(4));
        
        cout<<res;
        return res;
        
    }
};