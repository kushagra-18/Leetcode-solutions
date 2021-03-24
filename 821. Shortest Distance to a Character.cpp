class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        
        int n = s.size(),i,j,flag,pos = 0,test = 0 ;
        
        vector <int> arr(n,INT_MAX);
        
        
        for(i = 0;i<n;i++){
            
            if(s[i] == c){
                flag = i;
                for(int j = 0;j<n;j++) 
                    
                {
                    
                    if(test!=0){           
                    pos = arr[j];
                    arr[j] = min(pos,abs(flag - j));
                        
                        test++;
                    }else{
                        
                        
                        arr[j] = abs(flag-j);
                        test++;
                    }
                    
                }
            }
                   
            
        }
        
        return arr;
    }
};