class Solution {
public:
    int fillCups(vector<int>& amount) {
        int c=0;
        sort(amount.begin(),amount.end());
        
        while(amount[2]!=0){
            
            if(amount[2]!=0)
                
                c++,amount[1]--,amount[2]--;
            
            sort(amount.begin(),amount.end());
            
        }
        return c+amount[2];
    }
};