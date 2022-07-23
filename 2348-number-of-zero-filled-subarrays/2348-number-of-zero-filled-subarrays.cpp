class Solution {
public:
    
    long long helper(long long n){
        
        long long temp = (n*(n+1))/2;
        
        return temp;
        
    }
    long long zeroFilledSubarray(vector<int>& nums) {
        
        long long count = 0;
        
        long long tot = 0;
        
        for(auto &x:nums){
            
            if(x==0)
                count++;
            if(x!=0 && count){
                
                tot += helper(count);
                count = 0;
            }
            
        }
        
        if(count)
            tot += helper(count);
        
        return tot;
        
    }
};