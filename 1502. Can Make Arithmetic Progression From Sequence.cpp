class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        
        int n = arr.size(),j = 0,i;
        
        sort(arr.begin(),arr.end());
        
        int temp = arr[0] - arr[1];
        
        for(i = 1;i<n;i++){
            
            if((arr[i-1] - arr[i]) == temp)
                j++;
            
        }
        
        cout<<j;
        
        if(j==n-1){
            
            return true;
        }else{
            
            return false;
        }
        
    }
};