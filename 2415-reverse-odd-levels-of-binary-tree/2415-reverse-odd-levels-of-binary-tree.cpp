class Solution {
public:
    TreeNode* reverseOddLevels(TreeNode* root) {
        
        queue<TreeNode*> q;
        vector<int> values;
        int level = 0;
        
        q.push(root);
        
        while(!q.empty()){
            
            vector<int> temp;
            
            int n = q.size();
            
            for(int i = 0;i<n;i++){
                
                auto top = q.front();
                q.pop();
                
                if(level%2)
                    top->val = values[n-i-1];
                    
                if(top->left){
                    q.push(top->left);
                    temp.push_back(top->left->val);
                    
                }
                
                if(top->right){
                    
                    q.push(top->right);
                    temp.push_back(top->right->val);
                    
                }
                
            }
             values = temp;
             level++;
        }
        
        return root;
    }
};