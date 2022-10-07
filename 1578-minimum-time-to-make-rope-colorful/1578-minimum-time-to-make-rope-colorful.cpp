class Solution {
public:
    int minCost(string arr, vector<int>& t) {
        
        int n = arr.size();
        
        int minn = INT_MAX;
        
        int currMin = 0;
        int res;
        
        for(int i = 1;i<n;i++){
            
            if(arr[i] == arr[i-1])
            {
                currMin += min(t[i],t[i-1]);
               t[i] = max(t[i], t[i - 1]); 

            }

        }
        
        return currMin==INT_MAX?0:currMin;
        
    }
};