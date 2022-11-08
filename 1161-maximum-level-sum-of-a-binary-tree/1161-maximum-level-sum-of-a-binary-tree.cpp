class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        
        int maxSum = INT_MIN;
        
        int maxLevel = 0;
        
        auto level = 0;
        
        queue<TreeNode*> q;
        
        q.push(root);
        
        while(!q.empty()){
            
            level++;
            
            int sum = 0;
            
            int n = q.size();
            
            for(int i = 0;i<n;i++){
                
                auto top = q.front();
                q.pop();
                
                if(top->left!=nullptr)
                    q.push(top->left);
                
                if(top->right!=nullptr)
                    q.push(top->right);
                
                sum += top->val;  
            }
            
            if(sum>maxSum){
             maxSum = sum;
             maxLevel = level;
            }
            
        }
        
       return maxLevel;
    }
};