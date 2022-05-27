class Solution {
public:
    int countOperations(int num1, int num2) {
        
        if(num1==0 || num2==0)
            return 0;
        
        int count = 0;
        while(true){
            
            count++;
            if(num1>=num2)
                num1-=num2;
            else
                num2-=num1;
            if(num1 == 0 || num2 == 0)
                break;
            
        }
        
        return count;
    }
};