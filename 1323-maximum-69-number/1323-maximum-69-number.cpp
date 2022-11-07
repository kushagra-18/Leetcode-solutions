class Solution {
public:
    int maximum69Number (int num) {
        
        string res = to_string(num);
        
        for(auto &x:res){
            
            if(x=='6'){
                x = '9';
                break;
            }
            
        }
        
        return stoi(res);
        
    }
};