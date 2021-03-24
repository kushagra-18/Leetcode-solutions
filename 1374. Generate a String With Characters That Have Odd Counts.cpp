class Solution {
public:
    string generateTheString(int n) {
        
        string s = "";
        
        int i,flag = 0;
        
        if(n%2==0){
            
            flag = 1;
        }
            
        
        for(i = 0;i<n-1;i++){
                    
                s.append("k");
                 
        }
        
        if(flag==1){
            
            s.append("p");
        }else{
            
            s.append("k");
        }
        
        return s;
        
    }
};