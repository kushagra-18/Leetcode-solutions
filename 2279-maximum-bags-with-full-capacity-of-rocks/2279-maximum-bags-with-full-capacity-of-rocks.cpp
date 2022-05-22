class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int a) {
        
        vector<int> diff;
        
        for(int i = 0;i<capacity.size();i++){
            
            diff.push_back(capacity[i]-rocks[i]);
            
        }
        
         int count = 0;
        
        sort(diff.begin(),diff.end());
        
        for(int i = 0;i<diff.size();i++){
            
            if(diff[i]!=0 && diff[i]<=a){
                
                a -= diff[i];
                
                diff[i] = 0;
                
            }
            
            if(diff[i]==0)
                count++;
            
        }

        return count;
        
    }
};