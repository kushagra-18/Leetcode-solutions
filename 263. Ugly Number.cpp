class Solution {
public:
    bool isUgly(int n) {
        
        if(n<1){
            
            return false;
        }else if(n==1){
            
            return true;
        }else{
            
            while(n!=1)
            
            {
                if(n%2==0)
                    n = n/2;
                else if(n%3==0)
                    n = n/3;
                else if(n%5==0)
                    n = n/5;
                else
                    return false;
  
            
            }
   
            
        }
        
        return true;
        
    }
};