class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        
        vector <int> arr;
        
        
        for(int i = left;i<=right;i++){
            
             if(selfDivisible(i)){
                 
                 arr.push_back(i);
             }
            
            
          }
        
        return arr;
          
 } 
                
        
    bool selfDivisible(int x) {
        int y = x;
        while (y>0) {
            if (y%10 ==0 || x%(y%10) != 0) 
            {
                return false;
            }
            y /= 10;
        }
        return true;
    }
};