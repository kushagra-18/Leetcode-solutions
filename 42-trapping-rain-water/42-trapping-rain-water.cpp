class Solution {
public:
    int trap(vector<int>& arr) {
        
        int n = arr.size(),tot = 0;
        
        if(n<=2){
            
            return 0;
        }
        
        
    vector <int> left(n,0), right(n,0);
        
        //for computing left and right arrays
        
        left[0] = arr[0];
        right[n-1] = arr[n-1];
        
        for(int i = 1;i<n;i++){
            
            left[i] = max(left[i-1],arr[i]);
            right[n-i-1] =  max(right[n-i],arr[n-i-1]);
            
            
        }
        
        for(int i = 0;i<n;i++){
            
            int temp = min(left[i],right[i]);
            
            tot = tot + abs(temp - arr[i]);
            
            
        }
        
        
        return tot;
        
    }
};