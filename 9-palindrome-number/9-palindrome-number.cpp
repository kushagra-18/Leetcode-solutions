class Solution {
public:
    bool isPalindrome(int num) {
        
        
        if(num<0)
            return false;
        
        long int y,n = 0,x = 0;
        
         x = num;
        while(x!=0){
            
            y = x%10;
            n = n*10 + y;
            x = x/10;
            
            
        }
        
        cout<<n;
        
        
        if(n == num){
            
            return true;
        }
        
        return false;
    }
};