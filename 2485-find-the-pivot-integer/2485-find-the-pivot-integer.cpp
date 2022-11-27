class Solution {
public:
    int pivotInteger(int n) {
        
        for(int i = 0;i<=n;i++){
                     
            int left = 0;
            int right = 0;
            
            for(int j = i;j>=0;j--)
                left += j;
            
            for(int k = i;k<=n;k++)
                right +=k;
            
            if(left == right)
                return i;
            
            
        }
        
        return -1;
    }
};