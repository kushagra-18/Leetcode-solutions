class Solution {
public:
    int longestMountain(vector<int>& arr) {
        
        int n = arr.size();
        int i,j,largest = 0,count;
        
        
        for(i = 1;i<=n-2;){
            
            
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
                
                j = i;
                count = 1;
                
                while(j>=1 && arr[j] > arr[j-1]){
                    
                    j--;
                        count++;              
                }
                          
                while(i <=n-2 && arr[i] > arr[i+1])
                {
                    i++;
                    count++;
                    }
                
                largest = max(largest,count);
                     
            }
                    
            else{
                i++;
            }
        
        }
        
        return largest;
    }
};