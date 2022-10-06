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
    TreeNode* addOneRow(TreeNode* root, int val, int d) {
        
        if(d == 1){
            TreeNode * newRoot = new TreeNode(val);
            newRoot->left = root;
            return newRoot;
        }
        
        queue<TreeNode*> q;
        
        q.push(root);
        
        int h = 1;
        
        TreeNode* left;
        TreeNode* right;

        while(!q.empty()){
            
            int n = q.size();
            
            for(int i = 0;i<n;i++){
                
                auto top = q.front();
                q.pop();
        
            
                if(d-h==1){
                    
                    left = top->left;
                    right = top->right;
                    
                    TreeNode* newL = new TreeNode(val);
                    TreeNode* newR = new TreeNode(val);
                    top->left = newL;
                    top->right = newR;
                    
                    top->left->left = left;
                    top->right->right = right;
                
                }else{
                
                if(top->left)
                    q.push(top->left);
                if(top->right)
                    q.push(top->right);
                }
                
                // break;
            }
            h++;
            
        }
        
        return root;
        
    }
};