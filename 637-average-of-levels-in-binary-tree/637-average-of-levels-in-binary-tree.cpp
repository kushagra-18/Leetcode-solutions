/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        
        if(root == nullptr)
            return {};
        
        vector<double> res;
        
        queue<TreeNode*> q;
        
        q.push(root);
        
        while(!q.empty()){
            
            int n = q.size();
            double sum = 0;
            
            for(int i = 0;i<n;i++){
                
                auto top = q.front();
                q.pop();
                
                sum+=top->val;
                
                if(top->left)
                    q.push(top->left);
                
                if(top->right)
                    q.push(top->right);
                   
            }
            
            res.push_back(sum/n);
            
        }
             
        return res;
        
    }
};