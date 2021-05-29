class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
       
        int n =  encoded.size(),i,temp;
        
        vector <int> arr;
        
        arr.push_back(first);
        
        for(i = 0;i<n;i++){
            
          temp = arr[i]^encoded[i];
            
            arr.push_back(temp);
            
        }
        
       return arr; 
        
    }
};