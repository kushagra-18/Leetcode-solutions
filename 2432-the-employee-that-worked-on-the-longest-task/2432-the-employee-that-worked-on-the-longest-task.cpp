class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        
        map<int,int> mp;
        
        int maxx = INT_MIN;
        int taskTime = 0;
        int id;
        for(int i =  0;i<logs.size();i++){
            
            int timeTaken = logs[i][1]-taskTime;
            
            taskTime = logs[i][1];
            
            if(timeTaken>maxx || (timeTaken == maxx  && id > logs[i][0])){
                maxx = timeTaken;
                id = logs[i][0];
                
            }
                
        }
        
        return id;
        
    }
};