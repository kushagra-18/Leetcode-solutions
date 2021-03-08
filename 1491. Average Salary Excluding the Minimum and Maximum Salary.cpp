class Solution {
public:
    double average(vector<int>& salary) {
        
        int i, n = salary.size();
        double res = 0;
        
        sort(salary.begin(),salary.end());
        
        for(i = 1;i<n-1;i++){
            
            res = res + salary[i];
        }
        
        
        return res/(i-1);
        
    }
};