class Solution {
public:
    int threeSumClosest(vector<int>& arr,int target) {
        
        sort(arr.begin(),arr.end());
        int n = arr.size();
        
        int minSum = arr[0] + arr[1] + arr[2];

        for(int i = 0;i<n-2;i++){

            int j = i + 1;
            int k = n - 1;
            
                while(j<k){

                  int targetSum = arr[i] + arr[j] + arr[k];
                
                if(abs(targetSum-target)<abs(minSum-target))
                    minSum = targetSum;


                    if(target==targetSum){

                       return minSum;

                    }else if(targetSum > target){

                            k--;

                    }else{

                        j++;
                    }

                }
            }

    return minSum;
     
    }
};