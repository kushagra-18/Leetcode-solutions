class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        
    int i, currMax,totMax,size = arr.size();
  
     currMax = totMax = arr[0];

    for(i = 1; i<size;i++){

        currMax = max(currMax + arr[i],arr[i]);
        totMax = max(currMax,totMax);

    }
        
        return totMax;
        
    }
};