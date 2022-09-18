class Solution {
public:
    int longestContinuousSubstring(string s) {
        
        int n =  s.size();
        
        if(n == 0 || n == 1)
            return n;
        
        int maxx = 1;
        int currLen = 1;
        
        int prev = int(s[0]);
        
        int curr = 0;
            
        for(int i = 1;i<n;i++){
            

            curr = s[i];
            
           if(curr-prev==1)
              currLen++;
           else
              currLen = 1;
           
            prev = curr;
            maxx = max(currLen,maxx);
            
        }
        
        return maxx;
        
    }
};