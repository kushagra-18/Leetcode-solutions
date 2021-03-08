class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        
        int n = arr.size();
        int i;
        
        int count = -1;
        
        //sort(arr.begin(),arr.end());
        
        for(i = 0;i<n;i++){
            
            if(i+2<n){
          
            if(arr[i]%2!=0 && arr[i+1]%2!=0 && arr[i+2]%2!=0 ){
                
                
                count = 0;
             }
            }
            
            
        }
        
        if(count == 0)
            return true;
        else
            return false;
        
    }
};