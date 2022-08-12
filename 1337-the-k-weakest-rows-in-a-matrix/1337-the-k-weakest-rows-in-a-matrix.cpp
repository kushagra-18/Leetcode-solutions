class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        
        int n = mat.size();
        int m = mat[0].size();
        
        priority_queue<pair<int,int>> pq;
        
        int weak = 0;
        
        for(int i = 0;i<n;i++){
            
            for(int j = 0;j<m;j++){
                
                if(mat[i][j]==1)
                    weak++;
                
            }
            
            cout<<weak<<" "<<i<<endl;
            
            pq.push({weak,i});
            weak = 0;
            
            if(pq.size()>k)
                pq.pop();
        }
        
        vector <int> res;
        
        while(!pq.empty()){

            res.push_back(pq.top().second);
            
            pq.pop();
        
        }
        
        reverse(res.begin(),res.end());
        
        return res;
    }
};