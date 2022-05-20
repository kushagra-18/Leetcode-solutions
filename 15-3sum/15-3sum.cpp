class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        
        sort(arr.begin(),arr.end());

        int target = 0;
        int n = arr.size();
        vector <vector<int>> res;

        int targetSum = 0;

        for(int i = 0;i<n-2;i++){
            
            if ((i>0) && (arr[i]==arr[i-1]))
            continue;

            int j = i + 1;
            int k = n - 1;


                while(j<k){

                    targetSum = arr[i];
                    targetSum += arr[j];
                    targetSum += arr[k];


                    if(target==targetSum){

                        res.push_back({arr[i],arr[j],arr[k]});

                        while(j<k && arr[j]==arr[j+1])
                            j++;

                        while(j<k && arr[k] == arr[k-1])
                            k--;

                        j++;
                        k--;

                    }else if(targetSum > target){

                            k--;

                    }else{

                        j++;
                    }

                }
            }

    return res;
     
    }
};