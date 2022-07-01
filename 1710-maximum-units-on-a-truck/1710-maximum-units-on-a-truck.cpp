class Solution {
public:
    static bool comp(vector<int>& a, vector<int>& b){
        
        return a[1] > b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
        sort(boxTypes.begin(),boxTypes.end(),comp);
        
        int count = 0;
        for(int i = 0;i<boxTypes.size();i++){
            
            if(truckSize>=boxTypes[i][0]){
                cout<<"a";
                count +=boxTypes[i][1]*boxTypes[i][0];
                truckSize -= boxTypes[i][0];
            }else{
                cout<<"b";
                count += boxTypes[i][1]*(truckSize);
                break;
                
            }
            
        }
        
        
        return count;
        
    }
};