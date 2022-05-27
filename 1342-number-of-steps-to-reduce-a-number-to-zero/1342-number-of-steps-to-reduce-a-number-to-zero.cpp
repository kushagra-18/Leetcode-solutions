class Solution {
public:
    int numberOfSteps(int num) {
        
        if(num==0)
            return 0;
        
        int steps = 0;
        
        while(true){
            
            if(num%2==0)
                num = num/2;
            else
                num = num-1;
            if(num==0)
                break;
            steps++;
        }
        
        return steps+1;
    }
};